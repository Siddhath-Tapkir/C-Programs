// input: 3
// output: -3 -2 -1 0 1 2 3
#include<stdio.h>
void Display(int iNo)
{
    auto int iCnt = 0;
  
    for(iCnt = -iNo; iCnt <= iNo; iCnt++)
    {
        printf("%d\t",iCnt);
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