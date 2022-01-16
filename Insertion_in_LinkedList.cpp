#include <iostream>

using namespace std;

class Node
{
public:
    int Value;
    Node *Next;
};

void printList(Node *n)
{ // Passing a linked COMET to a Function.
    while (n != NULL)
    {
        cout << n->Value << endl;
        n = n->Next;
    }
}

void insertAtTheFront(Node**Head, int newValue) {  //at line 48, there is address of a pointer that means here we have to receive pointer of a pointer.

// 1.Prepare a newNode
     Node* newNode = new Node();
     newNode->Value = newValue;


      newNode->Next = *Head;                 


        *Head = newNode;
}

void insertAtTheEnd(Node **Head, int newValue)
{

    
    Node *newNode = new Node();
    newNode->Value = newValue;
    newNode->Next = NULL;


    if (*Head == NULL)
    {
        *Head = newNode;
        return;
    }

    
    Node *last = *Head;
    while (last->Next != NULL)
    {
        last = last->Next; 
    }

 
    last->Next = newNode;
}

int main()
{

    Node *Head = new Node();
    Node *Second = new Node();
    Node *Third = new Node();
    Node *Fourth = new Node();

    Head->Value = 1; 
    Head->Next = Second;

    Second->Value = 2;
    Head->Next = Third;

    Third->Value = 3;
    Head->Next = Fourth;

    insertAtTheFront(&Head, -1);  

    insertAtTheEnd(&Head, 8);
    printList(Head);
    printList(Second);
    printList(Third);

    system("pause>0");
}
