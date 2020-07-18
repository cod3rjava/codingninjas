
#include <cstddef>
class Node {
    public:
    int data;
    Node *next;

    Node(int data){
        this -> data = data;
        next = NULL;
    }
    
};
#include <iostream>

using namespace std;
void print(Node *head){
    while(head != NULL){
        cout << head -> data << endl;
        head = head -> next;
    }
    
}
void recPrint(Node *head){
    if(head == NULL){
        return;
    }
        cout << head -> data << endl;
        recPrint(head -> next);
}
int main()
{
    // Static Example
    Node *head;
    Node n1(1);
    Node n2(2);
    Node n3(3);
    Node n4(4);
    Node n5(5);
    head = &n1;
    n1.next = &n2;
    n2.next = &n3;
    n3.next = &n4;
    n4.next = &n5;
    // print(head);
    recPrint(head);
   // cout << head->data << endl;
    return 0;
}


