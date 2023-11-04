//yığınlar olusturuluyor
#include <iostream>
#include<stack>
#include<vector>
#include <deque>

using namespace std;
int main(){
    deque<int> mydeque(3,100);//3elemanlı kuyruk
    vector<int>myvector(2,200);//2 elemanlı vektör

    stack<int>first; //yığını boşalt

    //mydeque'nin kopyası olarak başlatılan bir yığın (stack).
    stack<int>second(mydeque);//mydeque kopyası için yığın başlatıldı

    //Standart bir boş vektör (vector).
    vector<int>third;//vektör kullanarak yığını boşalt
    vector<int>fourth(myvector);

    cout << "size of first: " << first.size() << '\n';
    cout << "size of second: " << second.size() << '\n';
    cout << "size of third: " << third.size() << '\n';
    cout << "size of fourth: " << fourth.size() << '\n';

    
}