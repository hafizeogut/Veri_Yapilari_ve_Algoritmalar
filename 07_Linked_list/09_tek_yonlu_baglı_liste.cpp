#include <iostream>

using namespace std;


struct Node{
    int data;
    Node * next;
};

int main(){
    Node *n1 = new Node() ;
    n1->data = 1;

    Node *n2 =new Node();
    n2->data=2;

    Node *n3 =new Node();
    n2->data=3; 

    Node * temp;
    temp =n1;

    while(temp!=NULL){
        cout<<temp->next<<"  ";
        temp = temp ->next;
        
    }
}