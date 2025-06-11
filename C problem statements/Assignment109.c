// Program to accept a string from user and replace capital letters with small letters
#include<stdio.h>
void ChangeLower(char *str)
{
    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            *str = *str + 32;
        }
        str++;
    }
}
int main()
{
    auto char Arr[50] = {'\0'};
    printf("Enter a string\n");
    scanf("%[^'\n']s",Arr);
    ChangeLower(Arr);
    printf("Updated string is : %s\n",Arr);

    return 0;
}