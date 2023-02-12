#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
};
int main()
{
    Node *start = new Node;
    Node *temp = start; 
    temp->data = 10;
    temp->next = new Node;
    temp = temp->next;

    Node *stop = temp;

    temp->data = 20;
    temp->next = new Node;
    temp = temp->next;

    temp->data = 30;
    temp->next = new Node;
    temp = temp->next;

    temp->data = 40;
    temp->next = NULL;
    // temp->next = stop;
    temp = temp->next;
    Node *tort = start;
    Node *hare = tort->next;
    while(hare != NULL) {
        if(hare == tort) {
            cout << hare->data << " "<<  tort->data;
            cout << "This is a cyclic linked list" << endl;
            return 0;
        }
        else
        {
             tort = tort->next;
             if(hare->next != NULL)
            hare = hare->next->next;
            else
            break;
        }
       
    }
    cout <<"This is a non cylic linked list" << endl;
}