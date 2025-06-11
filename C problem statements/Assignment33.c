// program to accept a number and check  if there is '0' in it or not
#include<stdio.h>
#include<stdbool.h>
int CheckZero(int iNo)
{
    if(0 > iNo)
    {
        iNo = -iNo;
    }
    auto int iDigit = 0, iCnt = 0;
    auto bool bAns = false;
    
    while(iNo != 0)
    {
        //iDigit = 0;
        iDigit = iNo % 10;
        if(0 == iDigit)
        {
            
            break;
        }
        iNo = iNo / 10;
        
    }
    if(0 == iDigit)
    {
        return true;
    }
    else
    {
        return false;
    }
    
}
int main()
{
    auto int iValue = 0;
    auto bool bRet = false;
    printf("Enter a number\n");
    scanf("%d",&iValue);
    bRet = CheckZero(iValue);
    if(true == bRet)
    {
        printf("0 is present\n");
    }
    else
    {
        printf("0 is not present\n");
    }
    return 0;
}