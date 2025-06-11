//Accept a character from user and check whether it is a digit or not (0-9)
#include<stdio.h>
#include<stdbool.h>

bool CheckAlpha(char ch)
{
    if((48 <= ch) && (57 >= ch))
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
        printf("It is a digit\n");
    }
    else
    {
        printf("Not a digit\n");
    }

    return 0;
}