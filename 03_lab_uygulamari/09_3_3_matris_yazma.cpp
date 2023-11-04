#include <iostream>

using namespace std;

int main(){
    int dizi[3][3] = {
    {1, 2, 0},
    {1, 0, 0},
    {1, 1, 1}};
    cout << "Dizi elemanları yazdırılıyor:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << dizi[i][j] <<" "<< &dizi[i][j] << "\t";
        }
        cout << endl;
    } 


    cout << endl<<"Dizi elemanları pointerlarla yazdırılıyor:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << *(*(dizi + i) + j) << " " <<(*(dizi + i) + j)<< "\t";//(*(dizi + i) + j) {1, 2, 0} -> adresi
            //*(*(dizi + i) + j) {1, 2, 0} içerideki 1 in adresi 
        }
        cout << endl;
    }
    


    cout<<endl<<endl;

    return 0;
}