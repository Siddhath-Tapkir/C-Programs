//Program to accept a string from user and count number of capital letters in it
#include<stdio.h>
#include<stdbool.h>

int ChkCapital(char *ch)
{
    auto int iCnt = 0;
    while(*ch != '\0')
    {
        if((*ch >= 'A') && (*ch <= 'Z'))
        {
            iCnt++;
        }
        ch++;
    }
    return iCnt;
}
int main()
{
    auto char str[20];
    auto int iRet = 0;
    printf("Enter a character\n");
    scanf("%[^'\n']s",str);
    iRet = ChkCapital(str);
    printf("Number of capital letters are %d\n",iRet);
   

    return 0;
}