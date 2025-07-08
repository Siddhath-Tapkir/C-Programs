#include<iostream>
using namespace std;
struct snode
{
    int data;
    struct snode *next;  
};
typedef struct snode SNODE;
typedef struct snode * SPNODE;

struct dnode
{
    int data;
    struct dnode *next;
    struct dnode *prev;
};
typedef struct dnode DNODE;
typedef struct dnode * PDNODE;

//////////////////////////////////////////// Singly Linear LL start ////////////////////////////////////////////
class SinglyLinearLL
{
    private:
        SPNODE first;
        int iCount;
    public:
        SinglyLinearLL();
        ~SinglyLinearLL();

        void Display();
        int Count();

        void InsertFirst(int);
        void InsertLast(int);
        void InsertAtPos(int, int);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int);
};

SinglyLinearLL :: SinglyLinearLL()
{
    iCount = 0;
    first = NULL;
}

SinglyLinearLL :: ~SinglyLinearLL()
{
    while(NULL != first)
    {
        DeleteFirst();
    }
}

void SinglyLinearLL :: Display()
{
    SPNODE temp = NULL;
    if(NULL == first)
    {
        cout<<"LinkedList is empty\n";
        return;
    }
    temp = first;
    while(NULL != temp)
    {
        cout<<temp->data<<"\t";
        temp = temp->next;
    }
}

int SinglyLinearLL :: Count()
{
    return iCount;
}

void SinglyLinearLL :: InsertFirst(int No)
{
    SPNODE newn = NULL;

    newn = new SNODE;

    newn->data = No;
    newn->next = NULL;

    if(NULL == first)
    {
        first = newn;
    }
    else
    {
        newn->next = first;
        first = newn;
    }
    iCount++;
}

void SinglyLinearLL :: InsertLast(int No)
{
    SPNODE newn = NULL;
    SPNODE temp = NULL;
    newn = new SNODE;

    newn->data = No;
    newn->next = NULL;

    if(NULL == first)
    {
        first = newn;
    }
    else
    {
        temp = first;
        
        while(NULL != temp->next)
        {
            temp = temp->next;
        }
        temp->next = newn;
    }
    iCount++;
}

void SinglyLinearLL :: InsertAtPos(int No, int iPos)
{
    SPNODE newn = NULL;
    SPNODE temp = NULL;

    if((1 > iPos) || (iPos > (iCount + 1)))
    {
        cout<<"Invalid Position\n";
        return;
    }
    
    if(1 == iPos)
    {
        InsertFirst(No);
    }
    else if(iPos == (iCount + 1))
    {
        InsertLast(No);
    }
    else
    {
        newn = new SNODE;
        temp = first;

        newn->data = No;
        newn->next = NULL;

        for(int iCnt = 1; iCnt < (iPos - 1); iCnt++)
        {
            temp = temp->next;
        }
        newn->next = temp->next;
        temp->next = newn;
        iCount++;
    }
}

void SinglyLinearLL :: DeleteFirst()
{
    SPNODE temp = NULL;

    if(NULL == first)
    {
        cout<<"LinkedList is empty\n";
        return;
    }
    else if(NULL == first->next)
    {
        delete first;
        first = NULL;
    }
    else
    {
        temp = first;

        first = first->next;

        delete temp;
    }
    iCount--;
}

void SinglyLinearLL :: DeleteLast()
{
    SPNODE temp = NULL;

    if(NULL == first)
    {
        cout<<"LinkedList is empty\n";
        return;
    }
    else if(NULL == first->next)
    {
        delete first;
        first = NULL;
    }
    else
    {
        temp = first;

        while(NULL != temp->next->next)
        {
            temp = temp->next;
        }
        delete temp->next;

        temp->next = NULL;
    }
    iCount--;
}

void SinglyLinearLL :: DeleteAtPos(int iPos)
{
    SPNODE temp = NULL;
    SPNODE target = NULL;


    if((1 > iPos) || (iPos > iCount))
    {
        cout<<"Invalid Position\n";
        return;
    }
    
    if(1 == iPos)
    {
        DeleteFirst();
    }
    else if(iPos == iCount)
    {
        DeleteLast();
    }
    else
    {
        temp = first;
        for(int iCnt = 1; iCnt < (iPos - 1); iCnt++)
        {
            temp = temp->next;
        }
        target = temp->next;

        temp->next = target->next;

        delete target;

        iCount--;
    }
}
//////////////////////////////////////////// Singly Linear LL end ////////////////////////////////////////////////

//////////////////////////////////////////// Singly Circular LL start ////////////////////////////////////////////
class SinglyCircularLL
{
    private:
        int iCount;
        SPNODE first;
        SPNODE last;
    public:
        SinglyCircularLL();
        ~SinglyCircularLL();

        void Display();
        int Count();

        void InsertFirst(int);
        void InsertLast(int);
        void InsertAtPos(int, int);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int);
};

SinglyCircularLL :: SinglyCircularLL()
{
    iCount = 0;
    first = NULL;
    last = NULL;
}

SinglyCircularLL :: ~SinglyCircularLL()
{
    while(first != last)
    {
        DeleteFirst();
    }
    DeleteFirst();
}

void SinglyCircularLL :: Display()
{
    SPNODE temp = NULL;
    temp = first;

    if(NULL == first)
    {
        cout<<"LinkedList is emtpy\n";
        return;
    }
    do
    {
        cout<<temp->data<<"\t";
        temp = temp->next;
    } while (temp != first);
    
}

int SinglyCircularLL :: Count()
{
    return iCount;
}

void SinglyCircularLL :: InsertFirst(int No)
{
    SPNODE newn = NULL;
    newn = new SNODE;

    newn->data = No;
    newn->next = NULL;

    if((NULL == first) && (NULL == last))
    {
        first = newn;
        last = newn;
    }
    else
    {
        newn->next = first;
        first = newn;
    }
    last->next = first;
    iCount++;
}
void SinglyCircularLL :: InsertLast(int No)
{
    SPNODE newn = NULL;
    newn = new SNODE;

    newn->data = No;
    newn->next = NULL;

    if((NULL == first) && (NULL == last))
    {
        first = newn;
        last = newn;
    }
    else
    { 
        last->next = newn;
        last = newn;
    }
    last->next = first;
    iCount++;
}

void SinglyCircularLL :: InsertAtPos(int No, int iPos)
{
    SPNODE newn = NULL;
    SPNODE temp = NULL;

    if((1 > iPos) || (iPos > (iCount + 1)))
    {
        cout<<"Invalid position\n";
        return;
    }
    
    if(1 == iPos)
    {
        InsertFirst(No);
    }
    else if(iPos == (iCount + 1))
    {
        InsertLast(No);
    }
    else
    {
        temp = first;
        newn = new SNODE;

        newn->data = No;
        newn->next = NULL;
        for(int iCnt = 1; iCnt < (iPos - 1); iCnt++)
        {
            temp = temp->next;
        }
        newn->next = temp->next;
        temp->next = newn;
        iCount++;
    }
}

void SinglyCircularLL :: DeleteFirst()
{
    if((NULL == first) && (NULL == last))
    {
        return;
    }
    else if(last == first)
    {
        delete first;
        first = NULL;
        last = NULL;
    }
    else
    {
        first = first->next;
        delete last->next;
        last->next = first;
    }
    iCount--;
}

void SinglyCircularLL :: DeleteLast()
{
    SPNODE temp = NULL;
    if((NULL == first) && (NULL == last))
    {
        return;
    }
    else if(last == first)
    {
        delete first;
        first = NULL;
        last = NULL;
    }
    else
    {
        temp = first;
        do
        {
            temp = temp->next;
        } while(temp->next != last);
        
        delete temp->next;
        last = temp;
        last->next = first;
    }
    iCount--;
}

void SinglyCircularLL :: DeleteAtPos(int iPos)
{
    SPNODE temp = NULL;
    SPNODE target = NULL;
    if((1 > iPos) || (iPos > iCount))
    {
        cout<<"Invalid position\n";
        return;
    }
    
    if(1 == iPos)
    {
        DeleteFirst();
    }
    else if(iPos == iCount)
    {
        DeleteLast();
    }
    else
    {
        temp = first;
        for(int iCnt = 1; iCnt < (iPos - 1); iCnt++)
        {
            temp = temp->next;
        }
        target = temp->next;

        temp->next = target->next;
        delete target;

        iCount--;
    }
}
//////////////////////////////////////////// Singly Circular LL end ////////////////////////////////////////////
//////////////////////////////////////////// Doubly Linear LL start ////////////////////////////////////////////
class DoublyLinearLL
{
    private:
        int iCount;
        PDNODE first;
    public:
        DoublyLinearLL();
        ~DoublyLinearLL();

        int Count();
        void Display();

        void InsertFirst(int);
        void InsertLast(int);
        void InsertAtPos(int,int);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int);
};

DoublyLinearLL :: DoublyLinearLL()
{
    iCount = 0;
    first = NULL;
}

DoublyLinearLL :: ~DoublyLinearLL()
{
    while(NULL != first)
    {
        DeleteFirst();
    }
}

void DoublyLinearLL :: Display()
{
    PDNODE temp = NULL;
    temp = first;

    while(NULL != temp)
    {
        cout<<temp->data<<"\t";
        temp = temp->next;
    }
}

int DoublyLinearLL :: Count()
{
    return iCount;
}

void DoublyLinearLL :: InsertFirst(int No)
{
    PDNODE newn = NULL;
    newn = new DNODE;

    newn->data = No;
    newn->next = NULL;
    newn->prev = NULL;

    if(NULL == first)
    {
        first = newn;
    }
    else
    {
        newn->next = first;
        first->prev = newn;
        first = newn;
    }
    iCount++;
}

void DoublyLinearLL :: InsertLast(int No)
{
    PDNODE temp = NULL;
    PDNODE newn = NULL;
    newn = new DNODE;

    newn->data = No;
    newn->next = NULL;
    newn->prev = NULL;

    if(NULL == first)
    {
        first = newn;
    }
    else
    {
        temp = first;
        while(NULL != temp->next)
        {
            temp = temp->next;
        }
        temp->next = newn;
        newn->prev = temp;
    }
    iCount++;
}
void DoublyLinearLL :: InsertAtPos(int No, int iPos)
{
    PDNODE temp = NULL;
    PDNODE newn = NULL;

    if((1 > iPos) || (iPos > (iCount + 1)))
    {
        cout<<"Invalid position\n";
        return;
    }

    if(1 == iPos)
    {
        InsertFirst(No);
    }
    else if(iPos == (iCount + 1))
    {
        InsertLast(No);
    }
    else 
    {
        newn = new DNODE;
        
        newn->data = No;
        newn->next = NULL;
        newn->prev = NULL;

        temp = first;
        for(int iCnt = 1; iCnt < (iPos - 1); iCnt++)
        {
            temp = temp->next;
        }
        newn->next = temp->next;
        temp->next->prev = newn;
        temp->next = newn;
        newn->prev = temp;

        iCount++;
    }
}

void DoublyLinearLL :: DeleteFirst()
{
    if(NULL == first)
    {
        return;
    }
    else if(NULL == first->next)
    {
        delete first;
        first = NULL;
    }
    else
    {
        first = first->next;
        delete first->prev;
        first->prev = NULL;
    }
    iCount--;
}

void DoublyLinearLL :: DeleteLast()
{
    PDNODE temp = NULL;
    if(NULL == first)
    {
        return;
    }
    else if(NULL == first->next)
    {
        delete first;
        first = NULL;
    }
    else
    {
        temp = first;
        while(NULL != temp->next->next)
        {
            temp = temp->next;
        }
        delete temp->next;
        temp->next = NULL;
    }
    iCount--;
}

void DoublyLinearLL :: DeleteAtPos(int iPos)
{
    PDNODE temp = NULL;

    if((1 > iPos) || (iPos > iCount))
    {
        cout<<"Invalid position\n";
        return;
    }

    if(1 == iPos)
    {
        DeleteFirst();
    }
    else if(iPos == iCount)
    {
        DeleteLast();
    }
    else 
    {
        temp = first;
        for(int iCnt = 1; iCnt < (iPos - 1); iCnt++)
        {
            temp = temp->next;
        }
        temp = temp->next;

        temp->prev->next = temp->next;
        temp->next->prev = temp->prev;
        delete temp;

        iCount--;
    }
}
//////////////////////////////////////////// Doubly Linear LL end ////////////////////////////////////////////
//////////////////////////////////////////// Doubly Circular LL start ////////////////////////////////////////////
class DoublyCircularLL
{
    private:
        int iCount;
        PDNODE first;
        PDNODE last;
    public:
        DoublyCircularLL();
        ~DoublyCircularLL();

        int Count();
        void Display();

        void InsertFirst(int);
        void InsertLast(int);
        void InsertAtPos(int, int);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int);
};

DoublyCircularLL :: DoublyCircularLL()
{
    iCount = 0;
    first = NULL;
    last = NULL;
}

DoublyCircularLL :: ~DoublyCircularLL()
{
    while(iCount != 0)
    {
        DeleteFirst();
    }
}

int DoublyCircularLL :: Count()
{
    return iCount;
}

void DoublyCircularLL :: Display()
{
    PDNODE temp = NULL;
    if(NULL == first)
    {
        cout<<"LinkedList is emtpy\n";
        return;
    }
    temp = first;
    do
    {
        cout<<temp->data<<"\t";
        temp = temp->next;
    } while(temp != first);
    cout<<endl;
}

void DoublyCircularLL :: InsertFirst(int No)
{
    PDNODE newn = NULL;
    newn = new DNODE;

    newn->data = No;
    newn->next = NULL;
    newn->prev = NULL;

    if(NULL == first)
    {
        first = newn;
        last = newn;
    }
    else
    {
        newn->next = first;
        first->prev = newn;
        first = newn;
    }
    last->next = first;
    first->prev = last;
    iCount++;
}

void DoublyCircularLL :: InsertLast(int No)
{
    PDNODE newn = NULL;
    newn = new DNODE;

    newn->data = No;
    newn->next = NULL;
    newn->prev = NULL;

    if(NULL == first)
    {
        first = newn;
        last = newn;
    }
    else
    {
        last->next = newn;
        newn->prev = last;
        last = newn;
    }
    last->next = first;
    first->prev = last;
    iCount++;
}

void DoublyCircularLL :: InsertAtPos(int No, int iPos)
{
    PDNODE temp = NULL;
    PDNODE newn = NULL;

    if((1 > iPos) || (iPos > (iCount + 1)))
    {
        cout<<"Invalid position\n";
        return;
    }

    if(1 == iPos)
    {
        InsertFirst(No);
    }
    else if(iPos == (iCount + 1))
    {
        InsertLast(No);
    }
    else
    {
        temp = first;
        newn = new DNODE;
         
        newn->data = No;
        newn->next = NULL;
        newn->prev = NULL;

        for(int iCnt = 1; iCnt < (iPos - 1); iCnt++)
        {
            temp = temp->next;
        }
        newn->next = temp->next;
        temp->next->prev = newn;
        temp->next = newn;
        newn->prev = temp;
        iCount++;
    }
}

void DoublyCircularLL :: DeleteFirst()
{
    if((NULL == first) && (NULL == last))
    {
        return;
    }
    
    if(last == first)
    {
        delete first;
        first = NULL;
        last = NULL;
    }
    else
    {
        first = first->next;
        delete first->prev;
        last->next = first;
        first->prev = last;
    }
    iCount--;
}

void DoublyCircularLL :: DeleteLast()
{
    if((NULL == first) && (NULL == last))
    {
        return;
    }

    if(last == first)
    {
        delete first;
        first = NULL;
        last = NULL;
    }
    else 
    {
        last = last->prev;
        delete last->next;
        first->prev = last;
        last->next = first;
    }
    iCount--;
}

void DoublyCircularLL :: DeleteAtPos(int iPos)
{
    PDNODE temp = NULL;

    if((1 > iPos) || (iPos > iCount))
    {
        cout<<"Invalid position\n";
        return;
    }

    if(1 == iPos)
    {
        DeleteFirst();
    }
    else if(iPos == iCount)
    {
        DeleteLast();
    }
    else
    {
        temp = first;
        for(int iCnt = 1; iCnt < iPos; iCnt++)
        {
            temp = temp->next;
        }
        temp->prev->next = temp->next;
        temp->next->prev = temp->prev;

        delete temp;

        iCount--;
    }
}
//////////////////////////////////////////// Doubly Circular LL end ////////////////////////////////////////////

int main()
{


    return 0;
}