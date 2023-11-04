#include <iostream>
#include <stack>


using namespace std;
int main()
{
    stack<int>foo,bar;
    foo.push(64);
    foo.push(20);
    foo.push(30);
    foo.push(11);
    bar.push(222);

    foo.swap(bar);

    cout << "size of foo: " << foo.size() << '\n';
    cout << "size of bar: " << bar.size() << '\n';
    
}