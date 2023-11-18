#include <iostream>

using namespace std;


class Node{
    public:
        int data;
        Node *next;
        Node(int data,Node *next=NULL ){
            this->data=data;
            this->next=next;
        }
};

int size(Node *temp){
    
    int size=0;
    while (temp != NULL){
        size++;
        temp=temp->next;
    }
    return size;
}

void    print(Node *temp){
    if (temp != NULL){
        cout<<temp->data<<endl;
        print(temp->next);
    }
}

int main(){
    Node *head,*temp;
    head = new Node(5);

    temp = head;
    temp->next = new Node(3);

    temp = temp->next;
    temp->next =new Node(7);

    temp=temp->next;
    temp->next= new Node(11);

    cout <<"Eleman Sayisi: ";
    cout<<size(head)<<endl;
    print(head);
    //Listenin baiına bir eleaman ekleme işlemi yapılıyor
    Node *new_head_node;
    new_head_node= new Node(20);

    if (head==NULL)
    {
        head=new_head_node;
    }
    else{
        new_head_node -> next = head;
        head=new_head_node;
    }
    cout <<"Eleman Sayisi: ";
    cout<<size(head)<<endl;
    print(head);

    //Listenin sonuna eleman ekleniyor.
    Node *new_head_rear;
    new_head_rear = new Node(30);

    if (head ==NULL)
    {
        head = new_head_rear;
    }
    else{
        temp =head;
        while (temp->next !=NULL)
        {
            temp = temp->next;

        }
        temp->next=new_head_rear;
        
    }

    cout <<"Eleman Sayisi: ";
    cout<<size(head)<<endl;
    print(head);
}
