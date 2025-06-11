//Program to accept a character from user print it's ascii value, decimal and hexadecimal value
#include<stdio.h>
#include<stdbool.h>

void Display(char ch)
{
    printf("Character: %c\t",ch);

    printf("\nAscii value: %d\t",ch);

    printf("\nOctal value: %o\t",ch);

    printf("\nHexadcimal value: 0X%x\n",ch);
}
int main()
{
    auto char cValue = '\0';
    auto bool bRet = false;
    printf("Enter a character\n");
    scanf("%c",&cValue);
    Display(cValue);
   

    return 0;
}