// program to accept a number and return multiplication of the digits in them
#include<stdio.h>
int MultiDigits(int iNo)
{
    if(0 > iNo)
    {
        iNo = -iNo;
    }
    auto int iDigit = 0, iCnt = 0, iZero = 0, iTemp = 1;
    
    while(iNo != 0)
    {
        
        iDigit = iNo % 10;
        if(0 == iDigit)
        {
            iZero = iDigit;
        }
        else
        {
            iTemp = iDigit * iTemp;
        }
        iNo = iNo / 10;
        
    }
    
    return iTemp;
}
int main()
{
    auto int iValue = 0;
    auto int iRet = 0;
    printf("Enter a number\n");
    scanf("%d",&iValue);
    iRet = MultiDigits(iValue);
    printf("%d is the multiplication \n",iRet);
    return 0;
}