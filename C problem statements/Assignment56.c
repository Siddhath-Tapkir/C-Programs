#include<stdio.h>
void Pattern(int iRow, int iCol)
{
    
    int iCnt = 0, jCnt = 0, k = 1;
    for(iCnt = iRow; iCnt > 0; iCnt--)
    {
       
       for(jCnt = 1; jCnt <= iCol; jCnt++)
       {
         printf("%d\t",k);
         k++;
         if(10 == k)
         {
            k = 1;
         }
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