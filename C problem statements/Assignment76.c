// Program to the size of an array and return the difference between summation of even and odd elements
#include<stdio.h>
#include<stdlib.h>
int Diff(int Arr[], int iSize)
{
    if((0 > iSize) && (NULL == Arr))
    {
        return -1;
    }
    auto int iCnt = 0, iEven = 0, iOdd = 0, iAns = 0;
    
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt] % 2) == 0)
        {
            
            iEven = iEven + Arr[iCnt];
        }
        else if((Arr[iCnt] % 2) != 0)
        {
            
            iOdd = iOdd + Arr[iCnt];
        }
    }
    iAns = iEven - iOdd;
    return iAns;
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
    iRet = Diff(ptr,iLength);
    if(-1 == iRet)
    {
        printf("There was some issue in the program\n");
    }
    else
    {
        printf("Difference between odd and even elements are: %d\n",iRet);
    }

    free(ptr);
    return 0;
}