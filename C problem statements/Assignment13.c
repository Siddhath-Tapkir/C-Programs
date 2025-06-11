//Program to check whether the character is vowel or not
#include<stdio.h>
#include<stdbool.h>
#define TRUE 1
#define FALSE 0
bool CheckVwl(char ch)
{
   if((('a' == ch) || ('e' == ch) || ('i' == ch) || ('o' == ch) || ('u' == ch)) || ('A' == ch) || ('E' == ch) || ('I' == ch) || ('O' == ch) || ('U' == ch))
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
   auto char cValue = '\0';
   auto bool bRet = FALSE; 
   printf("Enter the number\n");
   scanf("%c",&cValue);

   bRet = CheckVwl(cValue);
   if(TRUE == bRet)
   {
    printf("%c is a vowel \n",cValue);
   }
   else
   {
    printf("%c is not a vowel\n",cValue);
   }
    return 0;
}