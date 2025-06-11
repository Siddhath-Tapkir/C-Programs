//Accept elements from user and accept range from user and display all the elememnts from that range
#include<stdio.h>
#include<stdlib.h>
void Display(int Arr[], int iSize, int iStart, int iEnd)
{
    if((NULL == Arr) || (0 > iSize))
    {
        printf("There is a error in the program\n");
        return;
    } 
    if(iStart > iEnd)
    {
        int temp = iStart;
        iStart = iEnd;
        iEnd = temp;
    }
    if(0 > iStart)
    {
        iStart = -iStart;
    }
    if(0 > iEnd)
    {
        iEnd = -iEnd;
    }
    auto int iCnt = 0;
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        
       if((Arr[iCnt] >= iStart) && (Arr[iCnt] <= iEnd))
       
        {
           
                printf("%d\t",Arr[iCnt]);
            
        }
    }
    printf("\n");

}
int main()
{
    auto int iCnt = 0, iStart = 0, iEnd = 0, iLength = 0;
    int *ptr = NULL;
    printf("Enter the size\n");
    scanf("%d",&iLength);
    ptr = (int *)malloc(iLength * sizeof(int));
    printf("Enter the elements\n");
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }
    printf("Enter the starting point of range\n");
    scanf("%d",&iStart);

    printf("Enter the ending point of range\n");
    scanf("%d",&iEnd);
    Display(ptr,iLength,iStart,iEnd);
    free(ptr);

    return 0;

}