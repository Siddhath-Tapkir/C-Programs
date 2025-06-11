//Program to accept a string from user and check whether the string contains vowels or not
#include<stdio.h>
#include<stdbool.h>

bool ChkVwl(char *ch)
{
    auto int iCnt = 0, jCnt = 0;
    auto bool bFlag = false;
    while(*ch != '\0')
    {
        if(((*ch == 'A') || (*ch == 'E') || (*ch == 'I') || (*ch == 'O') || (*ch == 'U')) || ((*ch == 'a') || (*ch == 'e') || (*ch == 'i') || (*ch == 'o') || (*ch == 'u')))
        {
            bFlag = true;
        }
        ch++;
    }
    return bFlag;
    
}
int main()
{
    auto char str[20];
    auto bool bRet = false;
    printf("Enter a character\n");
    scanf("%[^'\n']s",str);
    bRet = ChkVwl(str);
    if(true == bRet)
    {
        printf("Contains vowels\n");
    }
    else

    {
        printf("Does not Contains vowels\n");
    }
   

    return 0;
}