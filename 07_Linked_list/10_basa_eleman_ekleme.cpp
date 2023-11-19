#include <iostream>

using namespace std;
//tek yonlu bağlı lisyte eleman ekleme

struct Node{
    int data;
    Node *next;
};


Node * basaEkle(Node *head,int key){
    if(head == NULL){//İlk düğüm oluturuluyıor
        Node * temp= new Node();//temp adında bir düğüm oluituruldu.
        temp ->data = key;//Veri kısmına gelecek değer olan key değeri atandı.
        temp->next = NULL;//ilk düğüm olması sebebiyle NULL un işaret ediyor.
        head=temp;
        cout<<"İlk dugum olusturuldu: "<<temp->data<<endl;

    }
 
    else { // Düğümlerin olduğu bir listenin başına ekleme yapılıyor
        Node *temp = new Node(); // Yeni bir düğüm oluşturuluyor
        temp->data = key; // Oluşturulan düğüme gelen değer atanıyor
        temp->next = head; // Oluşturulan düğüm, mevcut baş düğümüne işaret ediyor
        head = temp; // Head'i, oluşturulan düğümle güncelliyoruz
        cout << "Dugum olusturma islemi gerceklestirildi: " << temp->data << endl;
    }
    
    return head;
}
int main(){
    Node * head_node =NULL;

    head_node=basaEkle(head_node,11);
    head_node=basaEkle(head_node,22);
    head_node=basaEkle(head_node,33);
    head_node=basaEkle(head_node,44);

    cout<<head_node->data<<endl;
    cout<<head_node->next->data<<endl;
    cout<<head_node->next->next->data<<endl;
    cout<<head_node->next->next->next->data<<endl;
    return 0;

}