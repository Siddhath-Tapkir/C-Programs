//Program to check whether the number is even or not
#include<stdio.h>
#include<stdbool.h>
#define TRUE 1
#define FALSE 0
bool CheckEven(int iNo)
{
   if((iNo % 2) == 0)
   {
    return TRUE;
   }
   else
   {
    return FALSE;
   }
   
}
int main()
{
   auto int iValue = 0;
   auto bool bRet = FALSE; 
   printf("Enter the number\n");
   scanf("%d",&iValue);

   bRet = CheckEven(iValue);
   if(TRUE == bRet)
   {
    printf("%d is even \n",iValue);
   }
   else
   {
    printf("%d is odd\n",iValue);
   }
    return 0;
}