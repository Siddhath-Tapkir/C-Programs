// input: 4
// output: 1 * 2 * 3 * 4 *
#include<stdio.h>
void Pattern(int iNo)
{
    auto int iCnt = 0;
    
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\t*\t",iCnt);
        
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