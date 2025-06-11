//Program to check whether it is small alphabet or n
#include<stdio.h>
#include<stdbool.h>

bool CheckAlpha(char ch)
{
    if (('a' <= ch) && ('z' >= ch))
    {
        return true;
    }
    else
    {
        return false;
    }
   
}
int main()
{
    auto char cValue = '\0';
    auto bool bRet = false;
    printf("Enter a character\n");
    scanf("%c",&cValue);
    bRet = CheckAlpha(cValue);
    if(true == bRet)
    {
        printf("It is a small alphabet\n");
    }
    else
    {
        printf("Not small alphabet\n");
    }

    return 0;
}