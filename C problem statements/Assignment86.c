// Program to the size of an array and check the index of the element user want to search
#include<stdio.h>
#include<stdlib.h>
int CheckElement(int Arr[], int iSize, int iNo)
{
    if((0 > iSize) || (NULL == Arr))
    {
        printf("There is something issue in the program\n");
        return -1;
    }
    auto int iCnt = 0;
    
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt]  == iNo) 
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
        return iCnt;
    }
   
}
int main()
{
    auto int *ptr = NULL;
    auto int iCnt = 0, iLength = 0, iRet = 0, iIndex = 0;
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
    printf("Enter the element u want to search\n");
    scanf("%d",&iIndex);
    iRet = CheckElement(ptr,iLength,iIndex);
    
    if(-1 == iRet)
    {
        printf("There is no such element\n");
    }
    else
    {
        printf("The element is present at index %d\n",iRet);
    }
   

    free(ptr);
    return 0;
}