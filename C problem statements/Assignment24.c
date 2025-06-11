//program to see factorial of a number without recursion

#include<stdio.h>
int Factorial(int iNo)
{
    auto int iCnt = 0, iFact = 1;
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iFact = iFact * iCnt;
    }
    return iFact;
}
int main()
{
    auto int iValue = 0, iRet = 0;
    printf("Enter a number\n");
    scanf("%d",&iValue);
    iRet = Factorial(iValue);
    printf("factorial is %d\n",iRet);
    return 0;
}