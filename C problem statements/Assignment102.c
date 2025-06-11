//Program to check whether if it is a special character or not
#include<stdio.h>
#include<stdbool.h>

bool CheckAlpha(char ch)
{
    if (('!' == ch) || ('@' == ch) || ('#' == ch) || ('$' == ch) || ('%' == ch) || ('^' == ch) || ('&' == ch) || ('*' == ch))
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
        printf("It is a special character\n");
    }
    else
    {
        printf("Not a special character\n");
    }

    return 0;
}