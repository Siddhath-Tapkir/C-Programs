#include<stdio.h>
void Pattern(int iRow, int iCol)
{
    
    int iCnt = 0, jCnt = 0, k = 1;
    int ik = -1;
    for(iCnt = 1; iCnt <= iRow; iCnt++)
    {
       k = 1, ik = -1;
       for(jCnt = 1; jCnt <= iCol; jCnt++)
       {
        
        if((iCnt % 2) != 0)
        {
            
            printf("%d\t",k);
            k++;
        }
        else if((iCnt % 2) == 0)
        {
            
            printf("%d\t",ik);
            ik--;
            
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