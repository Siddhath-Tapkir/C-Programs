// Converting US Doller into Indian Rupees
#include<stdio.h>
int IndoDoller(int iNo)
{
    auto int iAns = 0;
    iAns = iNo * 70;
    return iAns;

printf("\n");
}
int main()
{
    auto int iValue = 0, iRet = 0;
    printf("Enter the US currency\n");
    scanf("%d",&iValue);
    iRet = IndoDoller(iValue);
    printf("USD into India rupees is: %d\n",iRet);
    return 0;
}