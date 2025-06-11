// Program to the size of an array and print the even elements divisible by 3 and 5
#include<stdio.h>
#include<stdlib.h>
void Divisible(int Arr[], int iSize)
{
    if((0 > iSize) && (NULL == Arr))
    {
        printf("There is something issue in the program\n");
        return;
    }
    auto int iCnt = 0;
    
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(((Arr[iCnt] % 3) == 0) && (Arr[iCnt] % 5) == 0)
        {
            printf("%d\n",Arr[iCnt]);
        }
       
    }
   
}
int main()
{
    auto int *ptr = NULL;
    auto int iCnt = 0, iLength = 0, iRet = 0;
    printf("Enter the number elements u want to store?\n");
    scanf("%d",&iLength);
    ptr = (int *)malloc(iLength * sizeof(int));
    if(NULL == ptr)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }
    printf("Enter the elemets\n");
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }
    Divisible(ptr,iLength);
   

    free(ptr);
    return 0;
}