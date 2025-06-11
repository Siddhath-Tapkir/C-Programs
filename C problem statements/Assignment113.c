// Program to accept a string from user and count number of white spaces in it
#include<stdio.h>
int CountSpaces(char *str)
{
    auto int iCount = 0;
    while(*str != '\0')
    {
        if(*str == ' ')
        {
            iCount++;
        }
        str++;
    }
    return iCount;
}
int main()
{
    auto char Arr[50] = {'\0'};
    auto int iRet = 0;
    printf("Enter a string\n");
    scanf("%[^'\n']s",Arr);
    iRet = CountSpaces(Arr);
    printf("Number of white spaces are : %d\n",iRet);

    return 0;
}