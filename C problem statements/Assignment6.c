// Program to display * on console 
#include<stdio.h>
void Accept(int iNo)
{
    if(0 > iNo)
    {
        iNo = -iNo;
    }

    while(iNo > 0)
    {
        printf("*");
        iNo--;
    }
    printf("\n");
}
int main()
{
   auto int iValue = 0;
   printf("Enter the number\n");
   scanf("%d",&iValue);
   Accept(iValue);
    return 0;
}