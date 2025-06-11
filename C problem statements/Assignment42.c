// input: 4
// output: 4 # 3 # 2 # 1 #
#include<stdio.h>
void Pattern(int iNo)
{
    auto int iCnt = 0;
    
    for(iCnt = iNo; iCnt > 0; iCnt--)
    {
        printf("%d\t#\t",iCnt);
        
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