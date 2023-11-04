#include <iostream>
#include<stack>

using namespace std;

int main(){
    //int değerler içeren bir stack tanımlandı
    stack<int>stack1;

    for(int i=0; i<4; i++)
    {
        stack1.push(i*10);
    }
    stack<int>stack2;
    while(!stack1.empty())
    {
        stack2.push(stack1.top());
        stack1.pop();
    }

    while(!stack2.empty())
    {
        cout << "Stack 2 Top = " << stack2.top() << endl;
        stack2.pop();
    }
    return 0;
}