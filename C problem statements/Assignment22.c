// program to display first 5 multiple of that number
#include<stdio.h>
void Display(int iNo)
{
    if(0 > iNo)
    {
        iNo = -iNo;
    }
    auto int iCnt = 0, iMul = 1;
    for(iCnt = 0; iCnt <= iNo; iCnt++)
    {
       printf("%d\n",iNo * iMul);
       iMul++;
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