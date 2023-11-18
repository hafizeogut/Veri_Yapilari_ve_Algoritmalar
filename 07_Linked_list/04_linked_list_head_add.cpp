#include <iostream>

using namespace std;

class Node{
    public:
        int data;
        Node *next;

        Node(int data, Node *next = NULL)
        {
            this -> data =data;
            this -> next = next;
        }
};
int size(Node *temp){
    int size = 0;
    while (temp !=NULL)
    {
        size++;
        temp =temp->next;
    }
    return size;
    

}
void print(Node *temp){
    if(temp !=NULL){
        cout<<temp->data<<endl;
        print(temp->next);

    }
}

int main(){
    Node *head, *temp;

    head =new Node(5);
    temp = head;
    temp ->next = new Node(3);
    temp=temp->next;

    temp->next = new Node(7);
    temp=temp->next;

    temp ->next = new Node(11);

    Node *new_node;
    new_node = new Node(20);
    if (head == NULL){
        head = new_node;
    }
    else{
        new_node->next=head;
        head=new_node;
    }
    cout << "Eleman sayisi...:";
    cout << size(head) << endl;
    print(head);
    return 0;
}