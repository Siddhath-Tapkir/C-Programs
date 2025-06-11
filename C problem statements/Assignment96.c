//Program to check whether it is capital alphabet or n
#include<stdio.h>
#include<stdbool.h>

bool CheckAlpha(char ch)
{
    if (('A' <= ch) && ('Z' >= ch))
    {
        return true;
    }
    else if (('a' <= ch) && ('z' >= ch))
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
        printf("It is a Capital alphabet\n");
    }
    else
    {
        printf("Not capital alphabet\n");
    }

    return 0;
}