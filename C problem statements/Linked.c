////////////////////////////////////////////////////////////////////////////////////////////////////////
//  
//  File name :                 Linked.c
//  Destription of file :       LinkedList program
//  Author :                    Siddharth V Tapkir
//  Date :                      24.06.2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *tail;
};
typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;
////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :                 Linked.c
//  Destription of file :       LinkedList program
//  Function name :             InsertFirst
//  Destription of function :   Inserts the element at first position of the LinkedList 
//  Input :                     struct node **
//  Author :                    Siddharth V Tapkir
//  Date :                      24.06.2025
//  
////////////////////////////////////////////////////////////////////////////////////////////////////////
void InsertFirst(PPNODE first, int No)
{
    PNODE node = NULL;
    node = (PNODE)malloc(sizeof(NODE));
    
    node->data = No;
    node->tail = NULL;

    node->tail = *first;
    *first = node;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :                 Linked.c
//  Destription of file :       LinkedList program
//  Function name :             InsertLast
//  Destription of function :   Inserts the element at Last position of the LinkedList 
//  Input :                     struct node **
//  Author :                    Siddharth V Tapkir
//  Date :                      24.06.2025
//  
////////////////////////////////////////////////////////////////////////////////////////////////////////
void InsertLast(PPNODE first, int No)
{
    PNODE node = NULL;
    PNODE temp = NULL;
    node = (PNODE)malloc(sizeof(NODE));
    
    node->data = No;
    node->tail = NULL;
    
    if(NULL == *first)
    {
        *first = node;
    }
    else
    {
        temp = *first;
        while(NULL != temp->tail)
        {
            temp = temp->tail;
        }
        temp->tail = node;
    }
}
////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :                 Linked.c
//  Destription of file :       LinkedList program
//  Function name :             DeleteFirst
//  Destription of function :   Deletes the first element of the LinkedList 
//  Input :                     struct node **
//  Author :                    Siddharth V Tapkir
//  Date :                      24.06.2025
//  
////////////////////////////////////////////////////////////////////////////////////////////////////////
void DeleteFirst(PPNODE first)
{
    PNODE temp = NULL;
    if(NULL != *first)
    {
        temp = *first;
        *first = (*first)->tail;
        free(temp);
    }
}
////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :                 Linked.c
//  Destription of file :       LinkedList program
//  Function name :             DeleteLast
//  Destription of function :   Deletes the last element of the LinkedList 
//  Input :                     struct node **
//  Author :                    Siddharth V Tapkir
//  Date :                      24.06.2025
//  
////////////////////////////////////////////////////////////////////////////////////////////////////////
void DeleteLast(PPNODE first)
{
    PNODE temp = NULL;
    if(NULL != *first)
    {
        temp = *first;
        while(NULL != temp->tail->tail)
        {
            temp = temp->tail;
        }
        
        free(temp->tail);
        temp->tail = NULL;
    }
}
////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :                 Linked.c
//  Destription of file :       LinkedList program
//  Function name :             Display
//  Destription of function :   Displays the LinkedList
//  Input :                     struct node *
//  Author :                    Siddharth V Tapkir
//  Date :                      24.06.2025
//  
////////////////////////////////////////////////////////////////////////////////////////////////////////
void Display(PNODE first)
{
    while(NULL != first)
    {
        printf("| %d | -> ",first->data);
        first = first->tail;
    }
    printf("NULL\n");
}
////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :                 Linked.c
//  Destription of file :       LinkedList program
//  Function name :             Count
//  Destription of function :   Counts the number of elements in the LinkedList
//  Input :                     struct node *
//  Output :                    Integer
//  Author :                    Siddharth V Tapkir
//  Date :                      24.06.2025
//  
////////////////////////////////////////////////////////////////////////////////////////////////////////
int Count(PNODE first)
{
    auto int iCount = 0;
     while(NULL != first)
    {
        iCount++;
        first = first->tail;
    }
    return iCount;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :                 Linked.c
//  Destription of file :       LinkedList program
//  Function name :             InsertAtPos
//  Destription of function :   Inserts the element in the a specific position of LinkedList
//  Input :                     struct node **
//  Author :                    Siddharth V Tapkir
//  Date :                      24.06.2025
//  
////////////////////////////////////////////////////////////////////////////////////////////////////////
void InsertAtPos(PPNODE first, int No, int iPos)
{
    auto int iCount = 0;
    PNODE node = NULL;
    PNODE temp = NULL;
    node = (PNODE)malloc(sizeof(NODE));
    
    node->data = No;
    node->tail = NULL;
    iCount = Count(*first);
    
    if((1 > iPos) || ((iCount + 1) <= iPos))
    {
        printf("Invalid position\n");
        return;
    }
    
    if(1 == iPos)
    {
        InsertFirst(first, No);
    }
    else if((iCount + 1) == iPos)
    {
        InsertLast(first, No);
    }
    else
    {
        temp = *first;
        for(int iCnt = 1; iCnt < (iPos - 1); iCnt++)
        {
            temp = temp->tail;
        }
        node->tail = temp->tail;
        temp->tail = node;
    }
}
////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :                 Linked.c
//  Destription of file :       LinkedList program
//  Function name :             DeleteAtPos
//  Destription of function :   Delets the element in the a specific position of LinkedList
//  Input :                     struct node **
//  Author :                    Siddharth V Tapkir
//  Date :                      24.06.2025
//  
////////////////////////////////////////////////////////////////////////////////////////////////////////
void DeleteAtPos(PPNODE first, int iPos)
{
    auto int iCount = 0; 
    PNODE temp = NULL;
    PNODE target = NULL;

    iCount = Count(*first);
    
    if((1 > iPos) || (iCount <= iPos))
    {
        printf("Invalid position\n");
        return;
    }
    
    if(1 == iPos)
    {
        DeleteFirst(first);
    }
    else if(iCount == iPos)
    {
        DeleteLast(first);
    }
    else
    {
        temp = *first;
        for(int iCnt = 1; iCnt < (iPos - 1); iCnt++)
        {
            temp = temp->tail;
        }
        target = temp;
        target = target->tail;
        temp->tail = target->tail;
       
        free(target);
    }
}
////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :                 Linked.c
//  Destription of file :       LinkedList program
//  Function name :             CountEven
//  Destription of function :   Counts Even number of elements in the LinkedList
//  Input :                     struct node *
//  Output :                    Integer
//  Author :                    Siddharth V Tapkir
//  Date :                      24.06.2025
//  
////////////////////////////////////////////////////////////////////////////////////////////////////////
int CountEven(PNODE first)
{
    auto int iEven = 0;
    while(NULL != first)
    {
        if((first->data) % 2 == 0)
        {
            iEven++;
        }
        first = first->tail;
    }
    return iEven;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :                 Linked.c
//  Destription of file :       LinkedList program
//  Function name :             SumEven
//  Destription of function :   Does addition of even elements in a LinkedList
//  Input :                     struct node *
//  Output :                    Integer
//  Author :                    Siddharth V Tapkir
//  Date :                      24.06.2025
//  
////////////////////////////////////////////////////////////////////////////////////////////////////////
int SumEven(PNODE first)
{
    auto int iEven = 0;
    while(NULL != first)
    {
        if((first->data) % 2 == 0)
        {
            iEven = iEven + first->data;
        }
        first = first->tail;
    }
    return iEven;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :                 Linked.c
//  Destription of file :       LinkedList program
//  Function name :             CountOdd
//  Destription of function :   Counts Odd number of elements in the LinkedList
//  Input :                     struct node *
//  Output :                    Integer
//  Author :                    Siddharth V Tapkir
//  Date :                      24.06.2025
//  
////////////////////////////////////////////////////////////////////////////////////////////////////////
int CountOdd(PNODE first)
{
    auto int iOdd = 0;
    while(NULL != first)
    {
        if((first->data) % 2 != 0)
        {
            iOdd++;
        }
        first = first->tail;
    }
    return iOdd;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :                 Linked.c
//  Destription of file :       LinkedList program
//  Function name :             SumOdd
//  Destription of function :   Does addition of odd elements in a LinkedList
//  Input :                     struct node *
//  Output :                    Integer
//  Author :                    Siddharth V Tapkir
//  Date :                      24.06.2025
//  
////////////////////////////////////////////////////////////////////////////////////////////////////////
int SumOdd(PNODE first)
{
    auto int iOdd = 0;
    while(NULL != first)
    {
        if((first->data) % 2 != 0)
        {
            iOdd = iOdd + first->data;
        }
        first = first->tail;
    }
    return iOdd;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :                 Linked.c
//  Destription of file :       LinkedList program
//  Function name :             Sum
//  Destription of function :   Does addition of all elements in a LinkedList
//  Input :                     struct node *
//  Output :                    Integer
//  Author :                    Siddharth V Tapkir
//  Date :                      24.06.2025
//  
////////////////////////////////////////////////////////////////////////////////////////////////////////
int Sum(PNODE first)
{
    auto int iSum = 0;
    while(NULL != first)
    {
        
        iSum = iSum + first->data;
        first = first->tail;
    }
    return iSum;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :                 Linked.c
//  Destription of file :       LinkedList program
//  Function name :             Insert
//  Destription of function :   Accepts the elements from user and create a LinkedList
//                                  Shows a menu and asks the user what operation to perform, calls all the above functions accordingly
//
//  Author :                    Siddharth V Tapkir
//  Date :                      24.06.2025
//  
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void Insert()
{
    auto int iNo = 0, iPos = 0;
    int *Arr = NULL;
    int ch = 0;
    PNODE head = NULL;
    auto int iSize = 0;
    printf("how many elements u want?\n");
    scanf("%d",&iSize);
    Arr = (int *)malloc(iSize * sizeof(int));
    printf("Enter elements\n");
    for(int iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&Arr[iCnt]);
        InsertLast(&head, Arr[iCnt]);
    }
    printf("------------------------------- menu -------------------------------\n");
    printf("1 : Insert first\n");
    printf("2 : Insert last\n");
    printf("3 : Insert at position\n");
    printf("4 : delete first\n");
    printf("5 : delete last\n");
    printf("6 : delete at position\n");
    printf("7 : count number of elemens\n");
    printf("8 : count even number of elements\n");
    printf("9 : count odd number of elements\n");
    printf("10 : Summation of even elements\n");
    printf("11 : Summation of odd elements\n");
    printf("12 : Summation of elements\n");
    printf("------------------------------- menu -------------------------------\nwhat you want to do?\n");
    scanf(" %d",&ch);

    switch(ch)
    {
        case 1: printf("Enter element \n");
                scanf("%d",&iNo);
                InsertFirst(&head,iNo);
                break;
                
        case 2: printf("Enter element \n");
                scanf("%d",&iNo);
                InsertLast(&head,iNo);
                break;
                
        case 3: printf("Enter element and position\n");
                scanf("%d %d",&iNo, &iPos);
                InsertAtPos(&head,iNo,iPos);
                break;
                
        case 4: DeleteFirst(&head);
                break;
                
        case 5: DeleteLast(&head);
                break;
                
        case 6: printf("Enter position\n");
                scanf("%d",&iPos);
                DeleteAtPos(&head,iPos);
                break;
        case 7: printf("Number of elements are: %d\n",Count(head));
                break;
        case 8: printf("There are %d even elements\n",CountEven(head));
                break;
        case 9: printf("There are %d odd elements\n",CountOdd(head));
                break;
        case 10: printf("Summation of even elements is : %d\n",SumEven(head));
                break;
        case 11: printf("Summation of odd elements is : %d\n",SumOdd(head));
                break;
        case 12: printf("Summation of all the elements is : %d\n",Sum(head));
        default : printf("Invalid input");
    }
    Display(head);
    free(Arr);
}
int main()
{
    // Total number of functions used in this code : 14
    Insert();

    return 0;
}