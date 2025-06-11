// Program to the size of an array and return the difference between the frequency of even and odd numbers
#include<stdio.h>
#include<stdlib.h>
int CheckEven(int Arr[], int iSize)
{
    if((0 > iSize) && (NULL == Arr))
    {
        printf("There is something issue in the program\n");
        return -1;
    }
    auto int iCnt = 0, jCnt = 0, kCnt = 0;
    
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt] % 2) == 0) 
        {
            jCnt++;

        }
        else if((Arr[iCnt] % 2) != 0)
        {
            kCnt++;
        }
       
    }
    return jCnt - kCnt;
   
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
    iRet = CheckEven(ptr,iLength);
    printf("%d\n",iRet);
   

    free(ptr);
    return 0;
}