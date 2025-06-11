// Program to accept a string from user and toggles the letter case
#include<stdio.h>
void Togle(char *str)
{
    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            *str = *str - 32;
        }
        else if((*str >= 'A') && (*str <= 'Z'))
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
    Togle(Arr);
    printf("Updated string is : %s\n",Arr);

    return 0;
}