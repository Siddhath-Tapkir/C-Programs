//Program to display even number based on the number of user
#include<stdio.h>
void PrintEven(int iNo)
{
   if(0 > iNo)
   {
    iNo = -iNo;
   } 
   auto int iCnt = 0;
   for(iCnt = 1; iCnt <= iNo; iCnt++)
   {
      printf("%d\n",iCnt*2);
     
   }
   
}
int main()
{
   auto int iValue = 0;
   
   printf("Enter the number\n");
   scanf("%d",&iValue);

   PrintEven(iValue);

    return 0;
}