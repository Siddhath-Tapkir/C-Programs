// program to accept a number and check  how many numbers are less than 6
#include<stdio.h>
int Count(int iNo)
{
    if(0 > iNo)
    {
        iNo = -iNo;
    }
    auto int iDigit = 0, iCnt = 0;
    
    while(iNo != 0)
    {
        //iDigit = 0;
        iDigit = iNo % 10;
        if(6 > iDigit)
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
    bRet = Count(iValue);
    printf("%d \n",bRet);
    return 0;
}