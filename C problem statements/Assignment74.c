#include<stdio.h>
void Pattern(int iRow, int iCol)
{
    auto int iCnt = 0, jCnt = 0;
    for(iCnt = 1; iCnt <= iRow; iCnt++)
    {
        for(jCnt = iCol; jCnt > 0; jCnt--)
        {
            if((1 == iCnt) || (iCnt >= iCol) || (jCnt == iRow) || (1 == jCnt) || (iCnt == jCnt))
            {
                printf("*\t");
            }
            else if(jCnt > iCnt)
            {
                printf("#\t");
            }
            else
            {
                printf("$\t");
            }
        }
        printf("\n");
    }
}
int main()
{
    auto int iValue1 = 0, iValue2 = 0;
    printf("Enter the number of rows and columns\n");
    scanf("%d %d",&iValue1, &iValue2);

    Pattern(iValue1,iValue2);


    return 0;
}