// Program to display odd factors
#include<stdio.h>
void OddFactor(int iNo)
{
    int iCnt = 0;
    if(0 > iNo)
    {
        iNo = -iNo;
    }
    for(iCnt = 1; iCnt <= iNo ;iCnt++ ) // time complexcity of this loop is half because of iNo / 2
    {
        if((iNo % iCnt) != 0)
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
    OddFactor(iValue);
    
    return 0;
}