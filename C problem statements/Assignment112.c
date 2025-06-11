// Program to accept a string from user display only digitis from that string
#include<stdio.h>
void Display(char *str)
{
    while(*str != '\0')
    {
        if((*str >= '0') && (*str <= '9'))
        {
            printf("%c",*str);
        }
        str++;
    }
    printf("\n");
}
int main()
{
    auto char Arr[50] = {'\0'};
    printf("Enter a string\n");
    scanf("%[^'\n']s",Arr);
    Display(Arr);
    

    return 0;
}