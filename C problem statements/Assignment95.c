#include<stdio.h>
char Change(char ch)
{
    auto char cChange = '\0';
    if(('a' <= ch) && ('z' >= ch))
    {
        cChange = ch - 32;
    }
    else if(('A' <= ch) && ('Z' >= ch))
    {
        cChange = ch + 32;
    }
    else
    {
        return -1;
    }
    return cChange;

}
int main()
{
    auto char cValue = '\0', ch = '\0';

    printf("Enter a alphabet\n");
    scanf("%c",&cValue);
    ch = Change(cValue);
    if(-1 == ch)
    {
        printf("Not an alphabet\n");
    }
    else
    {
        printf("%c\n",ch);
    }



    return 0;
}