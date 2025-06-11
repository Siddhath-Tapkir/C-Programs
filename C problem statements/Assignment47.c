// input: 4 3
/*
    output: 1 2 3
            1 2 3
            1 2 3
            1 2 3
*/
#include<stdio.h>
void Pattern(int iRow, int iCol)
{
    auto int iCnt = 0, jCnt = 0;
    
    for(iCnt = 1; iCnt <= iRow; iCnt++)
    {
        for(jCnt = 1; jCnt <= iCol; jCnt++)
        {
            printf("%d\t",jCnt);
        }
        printf("\n");
        
    }
    printf("\n");
}
int main()
{
    auto int iValue1 = 0, iValue2 = 0;
    printf("Enter number of rows and coloumns\n");
    scanf("%d %d",&iValue1, &iValue2);
    Pattern(iValue1, iValue2);


    return 0;
}