// program to display table of that number in reverse
#include<stdio.h>
void RevDisplay(int iNo)
{
    if(0 > iNo)
    {
        iNo = -iNo;
    }
    auto int iCnt = 0;
    for(iCnt = 10; iCnt > 0; iCnt--)
    {
       printf("%d\n",iNo * iCnt);
       
    }
}
int main()
{
    auto int iValue = 0;
    printf("Enter a number\n");
    scanf("%d",&iValue);
    RevDisplay(iValue);
    return 0;
}