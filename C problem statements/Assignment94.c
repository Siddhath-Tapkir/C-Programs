//Program to check whether it is a alphabet or not
#include<stdio.h>
#include<stdbool.h>
bool CheckAlpha(char ch)
{
    if((('a' <= ch) && ('z' >= ch) || ('A' <= ch) && ('Z' >= ch)))
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
        printf("It is a alphabet\n");
    }
    else
    {
        printf("Not a alphabet\n");
    }

    return 0;
}