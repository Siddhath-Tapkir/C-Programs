// program to accept a number and check  how many numbers are in between 3 and 7
#include<stdio.h>
int CountBetween(int iNo)
{
    if(0 > iNo)
    {
        iNo = -iNo;
    }
    auto int iDigit = 0, iCnt = 0;
    
    while(iNo != 0)
    {
        
        iDigit = iNo % 10;
        if((3 <= iDigit) && (7 >= iDigit))
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
    bRet = CountBetween(iValue);
    printf("there are %d numbers which are in between 3 and 7 \n",bRet);
    return 0;
}