// program to return difference between factors and non factors
#include<stdio.h>
int TellFactors(int iNo)
{
    int iCnt = 0, iSum = 0, iSum2 = 0;
        if(iNo < 0)
        {
            iNo = -iNo;
        }
        for(iCnt = 1; iCnt < iNo  ; iCnt++)
        {
            if((iNo % iCnt) == 0)
            {
                iSum = iSum + iCnt;
                  
                       
            }
            else if((iNo % iCnt) != 0)
            {
                iSum2 = iSum2 + iCnt;
                
            }
                
        }
    return iSum - iSum2;
}
int main()
{
    auto int iValue = 0, iRet = 0;
    printf("Enter a number\n");
    scanf("%d",&iValue);
    iRet = TellFactors(iValue);
    printf("Difference of facotrs and non factors are: %d\n",iRet);
    
    return 0;
}