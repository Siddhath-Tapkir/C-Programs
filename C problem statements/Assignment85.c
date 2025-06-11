// Program to the size of an array and check whether the elemet is present or not
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
int CheckElement(int Arr[], int iSize, int iNo)
{
    
    if((0 > iSize) || (NULL == Arr))
    {
        return -1;
    }
    auto int iCnt = 0, jCnt = 0, kCnt = 0;
    
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
     if((Arr[iCnt] == iNo))
     {
        break;
     } 
    }
    if(iCnt >= iSize)
    {
        return -1;
    }
    else
    {
        return 1;
    }
   
}
int main()
{
    auto int *ptr = NULL;
    auto int iCnt = 0, iLength = 0, iSer = 0;
    auto int iRet = false;
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
    printf("Enter the element you want to search\n");
    scanf("%d",&iSer);
    iRet = CheckElement(ptr,iLength,iSer);
    if(-1 == iRet)
    {
        printf("%d is not present in the array\n",iRet);
    }
    else
    {
        printf("%d is present in the array\n",iRet);
    }
   

    free(ptr);
    return 0;
}