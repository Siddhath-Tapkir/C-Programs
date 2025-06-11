// Program to return multiplication of factors
#include<stdio.h>
int MultFactor(int iNo)
{
    int iCnt = 0, iMult = 1;
    if(0 > iNo)
    {
        iNo = -iNo;
    }
    for(iCnt = 1; iCnt <= (iNo / 2);iCnt++ ) // time complexcity of this loop is half because of iNo / 2
    {
        if((iNo % iCnt) == 0)
        {
            iMult = iMult * iCnt;
        }
    }
    return iMult;
}
int main()
{
    auto int iValue = 0, iRet = 0;
    printf("Enter a number\n");
    scanf("%d",&iValue);
    iRet = MultFactor(iValue);
    printf("Multiplication of facotrs are: %d\n",iRet);
    
    return 0;
}