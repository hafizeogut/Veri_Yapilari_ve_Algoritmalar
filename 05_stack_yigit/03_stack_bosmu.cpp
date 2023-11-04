#include<iostream>
#include<stack>

using namespace std;
int main()
{
    stack<int> mystack;
    int sum(0);//int türünde bir sum değişkeni tanımlanır ve başlangıç değeri olarak 0 atanır.

    for(int i = 0; i <= 10; i++)
    {
        mystack.push(i);//stack elelmanları ekle-

    }
    while(!mystack.empty())
    {
        //Yığının en üstteki öğesini alır (mystack.top()) ve bu öğeyi sum değişkenine ekler.
        sum += mystack.top();// Yığının en üstteki öğesini toplam değişkenine ekler.
        mystack.pop();// Yığının en üstteki öğesini kaldırır.
    }
    cout<<"total: "<<sum<<endl;
    return 0;
}