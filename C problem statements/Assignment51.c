#include<stdio.h>
void Pattern(int iRow, int iCol)
{
    auto char ch = '\0';
    ch = 'A';
    int iCnt = 0, jCnt = 0;
    for(iCnt = 1; iCnt <= iRow; iCnt++)
    {
        ch = 'A';
       for(jCnt = 1; jCnt <= iCol; jCnt++)
       {
         printf("%c\t",ch);
        ch++;
       }
       printf("\n");
    }
    printf("\n");
}
int main()
{
    auto int iValue1 = 0, iValue2 = 0;
    printf("Enter the frequency\n");
    scanf("%d %d",&iValue1, &iValue2);
    Pattern(iValue1,iValue2);


    return 0;
}