#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node* next;
};

struct Node* new_node(int key)
{
    struct Node* node = new Node();
    node->data = key;
    node->next = NULL;

    return node;
}

void print(Node* node)
{
    while(node != NULL)
    {
        cout<<node->data<<" ";
        node = node->next;
    }
}

bool find_list(Node* ptr1, Node* ptr2)
{
    Node *first = ptr1;
    Node *second = ptr2;

    if(first == NULL && second == NULL)
       return true;

    if(first != NULL && second == NULL)
       return false;

    while(second != NULL)
    {
        ptr2 = second;

        while(first != NULL)
        {
            if(ptr2 == NULL)
               return false;

            else if(ptr2 == first)
            {
                ptr2 = ptr2->next;
                first = first->next;
            }

            else
              break;
        }

        if(first == NULL)
           return true;

        first = ptr1;

        second = second->next;
    }

    return false;
}

int main()
{
    Node *a = new_node(1);
    a->next = new_node(2);
    a->next->next = new_node(3);
    a->next->next->next = new_node(4);
  
    Node *b = new_node(1);
    b->next = new_node(2);
    b->next->next = new_node(1);
    b->next->next->next = new_node(2);
    b->next->next->next->next = new_node(3);
    b->next->next->next->next->next = new_node(4);

    find_list(a,b) ? cout << "LIST FOUND" :
                    cout << "LIST NOT FOUND";

    return 0;
}