//program to see difference of even and odd factorial of a number without recursion

#include<stdio.h>
int OddFactorial(int iNo)
{
    if(0 > iNo)
    {
        iNo = -iNo;
    }
    auto int iCnt = 0, iFact1 = 1, iFact2 = 1, iDiff = 0;
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2) == 0)
        {
            iFact1 = iFact1 * iCnt;
        }
        else
        {
            iFact2 = iFact2 * iCnt;
        }
    }
    iDiff = iFact1 - iFact2;
    return iDiff;
}
int main()
{
    auto int iValue = 0, iRet = 0;
    printf("Enter a number\n");
    scanf("%d",&iValue);
    iRet = OddFactorial(iValue);
    printf("Difference of even and odd factorial is %d\n",iRet);
    return 0;
}