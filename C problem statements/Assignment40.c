// program to accept a number and show difference between odd and even numbers
#include<stdio.h>
int CalculateDiff(int iNo)
{
    if(0 > iNo)
    {
        iNo = -iNo;
    }
    auto int iDigit = 0, iEven = 0, iOdd = 0;
    
    while(iNo != 0)
    {
        
        iDigit = iNo % 10;
        if((iDigit % 2) == 0)
        {
            iEven = iDigit + iEven;
        }
        else if((iDigit % 2) != 0)
        {
            iOdd = iDigit + iOdd;
        }

        iNo = iNo / 10;
        
    }
    
    return iEven - iOdd;
}
int main()
{
    auto int iValue = 0;
    auto int bRet = 0;
    printf("Enter a number\n");
    scanf("%d",&iValue);
    bRet = CalculateDiff(iValue);
    printf("%d is the difference\n",bRet);
    return 0;
}