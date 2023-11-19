#include <iostream>

using namespace std;
//tek yonlu bağlı lisyte eleman ekleme

struct Node{
    int data;
    Node *next;
};


Node * sonaEkle(Node *head,int key){
    if(head == NULL){//İlk düğüm oluturuluyıor
        Node * temp= new Node();//temp adında bir düğüm oluituruldu.
        temp ->data = key;//Veri kısmına gelecek değer olan key değeri atandı.
        temp->next = NULL;//ilk düğüm olması sebebiyle NULL un işaret ediyor.
        head=temp;
        cout<<"İlk dugum olusturuldu: "<<temp->data<<endl;

    }
 
    else { // Düğümlerin olduğu bir listenin başına ekleme yapılıyor
        Node *temp = new Node(); // Yeni bir düğüm oluşturuluyor
        temp->data = key;  
        temp->next = NULL;   

        Node *temp2 = head;
        while(temp2->next!=NULL) {
            temp2=temp2->next;
        }
        temp2->next=temp;
    }
    
    return head;
}
int main(){
    Node * head_node =NULL;

    head_node=sonaEkle(head_node,11);
    head_node=sonaEkle(head_node,22);
    head_node=sonaEkle(head_node,33);
    head_node=sonaEkle(head_node,44);
     
    cout<<head_node->data<<endl;
    cout<<head_node->next->data<<endl;
    cout<<head_node->next->next->data<<endl;
    cout<<head_node->next->next->next->data<<endl;
    return 0;

}