// program to accept a number and check  how many numbers are odd
#include<stdio.h>
int CountOdd(int iNo)
{
    if(0 > iNo)
    {
        iNo = -iNo;
    }
    auto int iDigit = 0, iCnt = 0;
    
    while(iNo != 0)
    {
        
        iDigit = iNo % 10;
        if((iDigit % 2) != 0)
        {
            iCnt++;
        }
        iNo = iNo / 10;
        
    }
    
    return iCnt;
}
int main()
{
    auto int iValue = 0;
    auto int bRet = 0;
    printf("Enter a number\n");
    scanf("%d",&iValue);
    bRet = CountOdd(iValue);
    printf("there are %d odd numbers\n",bRet);
    return 0;
}