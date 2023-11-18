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
    Node *head;
    head ->next = new Node(5);
    head ->next->next = new Node(7);
    head ->next ->next-> next = new Node(11);
    cout<<head->data<<endl;
}