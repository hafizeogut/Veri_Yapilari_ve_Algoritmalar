#include<iostream>
using namespace std;

int a2b2(int a,int b){
    return a*a+b*b;
}
int main(){
    int x,y;
    cout<<"x:";
    cin>>x;
    cout<<"y:";
    cin>>y;
    cout<<"x^2+y^2="<<a2b2(x,y)<<endl;
    return 0;
}