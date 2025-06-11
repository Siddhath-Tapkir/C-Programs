// program to display if the number is smaller that 50 small, greater than 50 and smaller than 100 medium, and greater than 100 large
#include<stdio.h>
void Numbers(int iNo)
{
    if(50 > iNo)
    {
        printf("Small\n");
    }
    else if((50 < iNo) && (100 > iNo))
    {
        printf("Medium\n");
    }
    else if(100 < iNo)
    {
        printf("Large\n");
    }
}
int main()
{
    auto int iValue = 0;
    printf("Enter a number\n");
    scanf("%d",&iValue);
    Numbers(iValue);
    return 0;
}