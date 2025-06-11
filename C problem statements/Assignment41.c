// input: 4
// output: A B C D
#include<stdio.h>
void Pattern(int iNo)
{
    auto char ch = '\0';
    ch = 'A';
    int iCnt = 0;
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%c\t",ch);
        ch++;
    }
    printf("\n");
}
int main()
{
    auto int iValue;
    printf("Enter the frequency\n");
    scanf("%d",&iValue);
    Pattern(iValue);


    return 0;
}