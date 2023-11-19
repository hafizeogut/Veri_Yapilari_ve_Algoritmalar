
#include <iostream>


using namespace std;


struct Ogrenci{
    string ad;
    string soyad;
    char cinsiyet;
    int yas;
    struct Ogrenci *next;
};
 
int main(){
    struct Ogrenci  *o1 = new Ogrenci;//ilk dugum olusturuldu.
    struct Ogrenci  *o2 = new Ogrenci;//ikinci düğüm oluşturuldu.
    struct Ogrenci  *o3 = new Ogrenci;//üöüncü düğüm oluşturuldu.


    o1 ->ad ="Hafize";
    o1->soyad = "Ogut";
    o1->cinsiyet='k';
    o1->yas =24;

    o2 ->ad ="Feyza ";
    o2->soyad = "Koc";
    o2->cinsiyet='k';
    o2->yas =23;


    o3 ->ad ="Betul";
    o3->soyad = "Kandemir";
    o3->cinsiyet='k';
    o3->yas =25;


    o1->next = o2;
    o2->next = o3;
    o3->next = NULL;

    struct Ogrenci *temp = o1;
    while(temp !=NULL){
        cout<<temp->ad<<":  "<<temp->soyad<<":  "<<temp->cinsiyet<<":   "<<temp->yas<<":   "<<endl;
        temp=temp->next;
    }
    return 0;

}