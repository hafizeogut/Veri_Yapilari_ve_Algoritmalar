#include <iostream>

using namespace std;

class Node{
    public:
        int data;
        Node *next;
        Node(int data, Node *next =NULL){
            this->data=data;
            this->next=next;
        }

};

int size(Node *temp){
    int size =0;
    while (temp != NULL)
    {
        size++;
        temp=temp->next;
    }
    return size;
}

void print(Node *temp){
    while (temp !=NULL)
    {
        cout<<temp->data<<endl;
        temp = temp->next;
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
    Node *new_node_rear;
    new_node_rear = new Node(30);

    if (head ==NULL)
    {
        head = new_node_rear;
    }
    else{
        temp =head;
        while (temp->next !=NULL)
        {
            temp = temp->next;

        }
        temp->next=new_node_rear;
        
    }

    cout <<"Eleman Sayisi: ";
    cout<<size(head)<<endl;
    print(head);

    Node *new_node_center;
    new_node_center = new Node(54);

    int sayac = 0;
    int konum=4;
    temp = head;
    while (temp->next !=NULL)
    {
        if(konum-1==sayac)
        {
            break;
        }
        temp=temp->next; 
        sayac ++;/*Belirli konuma gelindiğinde sayac ile konumu karşılatırılır ve donguden çıkılır*/
    }
    new_node_center->next =temp->next;
    temp->next=new_node_center;


    cout <<"Eleman Sayisi: ";
    cout<<size(head)<<endl;
    print(head);

    int location=5;
    if (head==NULL)
    {
        throw "Liste bos";
    }
    if (location <0 || konum >size(head)-1){
        throw "Geçersiz Konum";
    }
    temp=head;
    if(konum==0){
        head=head->next;
        delete temp;
    }
    else{
        //öncekği konumdaki düğümü getir
        int counter=0;
        while(temp->next != NULL){
            if (counter ==(location-1)) break;
            temp  =temp->next;
            counter++;
        }
        //
        Node *eski_dugum=temp->next;
        temp->next =eski_dugum->next;
        delete eski_dugum;
    }
    cout << "Eleman sayisi...:";
    cout << size(head) << endl;
    print(head);



    

}