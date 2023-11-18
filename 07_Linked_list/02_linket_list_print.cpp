#include <iostream>

using namespace std;

class Node{
    public:
        int data;
        Node *next;

        /*sınıfın üye değişkenlerini başlatmak, gerekli ayarları yapmak veya diğer başlangıç işlemlerini gerçekleştirmek için kurucu metod olışturuldu*/
        Node (int data,Node *next =NULL){ 
            this->data =data;
            this->next=next;
        }
};

//Bağlı lisytedeki elemanlar yazdırılıyor
void print(Node *temp){
    while (temp != NULL)
    {
        cout<<temp->data <<endl;
        temp = temp->next;
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
    print(head);

}