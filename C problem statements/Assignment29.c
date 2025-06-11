//program to see Even factorial of a number without recursion

#include<stdio.h>
int EvenFactorial(int iNo)
{
    if(0 > iNo)
    {
        iNo = -iNo;
    }
    auto int iCnt = 0, iFact = 1;
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2) == 0)
        {
            iFact = iFact * iCnt;
        }
    }
    return iFact;
}
int main()
{
    auto int iValue = 0, iRet = 0;
    printf("Enter a number\n");
    scanf("%d",&iValue);
    iRet = EvenFactorial(iValue);
    printf("factorial is %d\n",iRet);
    return 0;
}