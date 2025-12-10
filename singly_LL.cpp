#include <iostream>
using namespace std;


struct Node
{
    int val;
    struct Node *next;

    Node(int val) // constructor
    {
        this->val = val;
        next = nullptr;
    }
};

class LinkedList
{
private:
    Node *head;

public:
    LinkedList()
    {
        head = nullptr;
    }

    void append(int val)
    {
        Node *newNode = new Node(val);
        if (head == nullptr)
        {
            head = newNode;
        }
        else
        {
            Node* temp = head;
            while(temp->next != nullptr)
            {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    void prepend(int val)
    {
        Node* newNode = new Node(val);
        newNode->next = head;
        head = newNode;
    }

    void display()
    {
        Node* temp = head;
        while(temp != nullptr)
        {
            cout << temp->val << "->";
            temp = temp->next;
        }
        cout << "NULL";
    }
};

int main()
{
    LinkedList LL;
    int i=0;
    while(i<=10)
    {
        LL.append(i);
        i++;
    }
    LL.prepend(15);
    LL.display();
    
    
    
    return 0;
}