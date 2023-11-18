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

int main(){
    Node *head,*temp;
    //ilk düğüm başa bağlandı
    head = new Node(5);

    //temp değerini kullanarak diğer elemanları bağla
    temp=head;

    //bir eleman ekle
    temp->next=new Node (3);

    //ileri git
    temp = temp->next;

    //eleman ekle
    temp->next=new Node(7);

    //ileri gidiliyor
    temp = temp->next;

    //bir eleman ekleniyor
    temp->next = new Node(11);
    
    temp = temp->next;
    cout<<temp->data;
}