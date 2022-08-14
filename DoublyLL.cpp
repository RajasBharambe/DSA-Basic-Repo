#include <iostream>
using namespace std;
 x
class Node
{
public:
    int key;
    int data;
    Node *next;
    Node *previous;

    Node()
    {
        key = 0;
        data = 0;
        next = NULL;
        previous = NULL;
    }
    Node(int k, int d)
    {
        key = k;
        data = d;
    }

};

class DoubleLinkedList{
    public:
    Node* head;  // head pointer points to first node

    DoubleLinkedList()
    {
        head = NULL;
    }
    DoubleLinkedList(Node *n)
    {
        head = n;
    }

    /// check if node exists using key value
    
    Node* checkIfNodeExists(int k)
    {
        Node* temp = NULL;
        Node* ptr = head;

        while (ptr != NULL)
        {
            if (ptr->key==k)
            {
                temp=ptr;
            }
            ptr = ptr->next;
        }
        return temp;
    }

};

int main()
{
    DoubleLinkedList();
    
    return 0;
}
