//Program to display the ASCII table
#include<stdio.h>
void DisplayASCII()
{
    auto char ch = '\0';
    auto int iCnt = 0;
    for(iCnt = 0; iCnt < 127; iCnt++)
    {
        printf("ASCII value %d\t",ch);
        printf("Symbol %c\t",ch);
        printf("\n");
        ch++;
    }
}
int main()
{

    DisplayASCII();

    return 0;
}