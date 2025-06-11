// program to accept a number and check  how many times 2 is repeated in a number
#include<stdio.h>
#include<stdbool.h>
int CheckTwo(int iNo)
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
        if(2 == iDigit)
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
    bRet = CheckTwo(iValue);
    printf("2 is appeared %d times\n",bRet);
    return 0;
}