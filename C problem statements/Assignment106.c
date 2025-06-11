//Program to accept a string from user and return difference between small and capital letters
#include<stdio.h>
#include<stdbool.h>

int ChkCapital(char *ch)
{
    auto int iCnt = 0, jCnt = 0;
    while(*ch != '\0')
    {
        if((*ch >= 'a') && (*ch <= 'z'))
        {
            iCnt++;
        }
        else if((*ch >= 'A') && (*ch <= 'Z'))
        {
            jCnt++;
        }
        ch++;
    }
    return iCnt - jCnt;
}
int main()
{
    auto char str[20];
    auto int iRet = 0;
    printf("Enter a character\n");
    scanf("%[^'\n']s",str);
    iRet = ChkCapital(str);
    printf("difference is %d\n",iRet);
   

    return 0;
}