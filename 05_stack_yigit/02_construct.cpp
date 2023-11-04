#include <iostream>
#include <stack>
#include<string>

using namespace std;

int main(){

    stack<string>mystack;
    mystack.emplace("ilk cümle");//stacke ekle yerlestir
    mystack.emplace("ikinci cümle");

    cout<<"mystack içerir \n";

    while(!mystack.empty())
    {
        cout<<mystack.top()<<endl;//en üstteki elemana ulaş
        mystack.pop();//stackten son elemanı sil
    }
}