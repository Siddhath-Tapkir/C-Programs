// input : 4
// output : $ * $ * $ * $ *
#include<stdio.h>
void Display(int iNo)
{
    auto int iCnt = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("$\t*\t");
    }
printf("\n");
}
int main()
{
    auto int iValue = 0;
    printf("Enter the frequency\n");
    scanf("%d",&iValue);
    Display(iValue);
    return 0;
}