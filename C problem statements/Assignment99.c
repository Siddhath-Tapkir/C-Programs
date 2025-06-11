//Program to display exam time of entered division
#include<stdio.h>
void DisplaySchedule(char ch)
{
    if(('a' == ch) || ('A' == ch))
    {
        printf("Your exam is at 7AM\n");
    }

    else if(('b' == ch) || ('B' == ch))
    {
        printf("Your exam is at 8:30AM\n");
    }

    else if(('c' == ch) || ('C' == ch))
    {
        printf("Your exam is at 9:20AM\n");
    }

    else if(('d' == ch) || ('D' == ch))
    {
        printf("Your exam is at 10:30AM\n");
    }
    else
    {
        printf("Please enter correct division\n");
    }
   
}
int main()
{
    auto char cValue = '\0';
    printf("Enter ur division\n");
    scanf("%c",&cValue);
    DisplaySchedule(cValue);
  

    return 0;
}