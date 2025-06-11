#include<stdio.h>
void Display(char ch)
{
  auto int iCnt = 0;
  if((('a' >= ch) || ('z' <= ch)) && ('A' >= ch) || ('Z' <= ch))
  {
    printf("Wrong input\n");
    return;
  }
  if('a' <= ch) 
  {
    while(ch != 'a' - 1)
    {
        printf("%c\t",ch);
        ch--;
    }
  }
  else
  {
    while(ch != 'Z' + 1)
    {
        printf("%c\t",ch);
        ch++;
    }
  }
  printf("\n");
}
int main()
{
    auto char cValue = '\0';
    printf("Enter a alphabet\n");
    scanf("%c",&cValue);
    Display(cValue);

    return 0;
}