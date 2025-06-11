 
#include<stdio.h>
void Display(int iNo1, int iNo2)
{
    if(0 > iNo2)
    {
        iNo2 = -iNo2;
    }
    auto int iCnt = 0;
    for(iCnt = 1; iCnt <= iNo2; iCnt++)
    {
        printf("%d\n",iNo1);
    }
}
int main()
{
   auto int iValue1 = 0, iValue2 = 0;
   printf("Enter the number\n");
   scanf("%d %d",&iValue1, &iValue2);
   Display(iValue1,iValue2);
    return 0;
}