// Program to display a string in reverse
#include<stdio.h>
void strrevX(char *str)
{
    auto int iCnt = 0, iCount = 0;
    while(*str != '\0')
    {
        str++;
    }
    str--;
    while('\0' != *str)
    {
        printf("%c",*str);
        str--;
    }
    
   
    printf("\n");
}
int main()
{
    auto char Arr[50] = {'\0'};
    printf("Enter a string\n");
    scanf("%[^'\n']s",Arr);
    strrevX(Arr);
    

    return 0;
}