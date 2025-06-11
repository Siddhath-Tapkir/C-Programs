// Program to the size of an array and show the number with 3 digits
#include<stdio.h>
#include<stdlib.h>
void Digit(int Arr[], int iSize)
{
    if((0 > iSize) && (NULL == Arr))
    {
        printf("Issue in the code\n");
        return;
    }
    auto int iCnt = 0, iDigit = 0;
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt] >= 100) && (Arr[iCnt] <= 999))
        {
            printf("%d\t",Arr[iCnt]);
        }
    }
    printf("\n");
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
    Digit(ptr,iLength);
  

    free(ptr);
    return 0;
}