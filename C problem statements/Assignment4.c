//Program to check whether the number is divisible by 5 or not
#include<stdio.h>
#include<stdbool.h>
#define TRUE 1
#define FALSE 0
bool Check(int iNo)
{
   if((iNo % 5) == 0)
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

   bRet = Check(iValue);
   if(TRUE == bRet)
   {
    printf("%d is divisible by 5",iValue);
   }
   else
   {
    printf("%d is not divisible by 5",iValue);
   }
    return 0;
}