 
#include<stdio.h>
void Accept(int iNo)
{
    if(iNo < 10)
    {
        printf("Hello");
    }
    else
    {
        printf("Demo");
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