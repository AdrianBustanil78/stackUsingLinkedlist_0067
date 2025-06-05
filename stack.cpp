#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node()
    {
        next = NULL;
    }
};

class Stack
{
private:
    Node *top;

public:
    Stack()
    {
        top = NULL;
    }

    int push(int value)
    {
        Node *newNode = new Node();
        newNode->data = value;
        newNode->next = top;
        top =newNode;
        cout << "Push value:" << value << endl;
    }

    void pop()
    {
        Node *temp = top;
        if (isEmpty())
        {
            cout << "stack is empty." << endl;
            return;
        }

        cout << "Popped value:" << temp->data << endl;
        top = temp->next; 
        delete temp; 
    }

        void peek()
    {
        if (isEmpty())
        {
            cout << "List is empty." << endl;
        }
        else
        {
            Node *current = top;
            while (current != NULL)
            {
                cout << current->data << " " << endl;
                current = current->next;
            }
            cout << endl;
        }
    }

     bool isEmpty()
    {
        return top == NULL;
    }
};

int main()
{
    Stack stack;

    
}