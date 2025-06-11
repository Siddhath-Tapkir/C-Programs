// Program to display factors in reverse
#include<stdio.h>
void RevFactor(int iNo)
{
    int iCnt = 0;
    if(0 > iNo)
    {
        iNo = -iNo;
    }
    for(iCnt = (iNo / 2); iCnt > 0;iCnt-- ) // time complexcity of this loop is half because of iNo / 2
    {
        if((iNo % iCnt) == 0)
        {
            printf("%d\n",iCnt);
        }
    }
}
int main()
{
    auto int iValue = 0;
    printf("Enter a number\n");
    scanf("%d",&iValue);
    RevFactor(iValue);
    
    return 0;
}