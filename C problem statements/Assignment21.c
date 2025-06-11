// program to display odd numbers on console
#include<stdio.h>
void Display(int iNo)
{
    if(0 > iNo)
    {
        iNo = -iNo;
    }
    auto int iCnt = 0, iOdd = 0;
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2) != 0)
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
    Display(iValue);
    return 0;
}