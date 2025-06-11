#include<stdio.h>
void Pattern(int iRow, int iCol)
{
    
    int iCnt = 0, jCnt = 0, k = 1, s = 1;
    for(iCnt = 1; iCnt <= iRow; iCnt++)
    {
       
       
       for(jCnt = 1; jCnt <= iCol; jCnt++)
       {
         printf("%d\t",k);
        k++;
        
         if((iCol + s) <= k)
         {
            
            k = 1;
            k = k + s;
            s++;
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