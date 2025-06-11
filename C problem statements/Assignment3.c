// Program to display 5 to 1 numbers on console
#include<stdio.h>
void Display()
{
    int iCnt = 0;
    iCnt = 1;
    while(iCnt <= 5)
    {
        printf("%d\n",iCnt);
        iCnt++;
    }
   
}
int main()
{
   Display();
    return 0;
}