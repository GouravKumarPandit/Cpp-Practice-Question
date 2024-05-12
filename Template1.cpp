#include<iostream>
using namespace std;

template<class temp>
temp add(temp x,temp y){
    return x+y;
}

int main(){
    cout<<"Enter two number>>"<<endl;
    float a,b;
    cin>>a>>b;
    float c=add(a,b);
    cout<<"Sum>>"<<c<<endl;
    return 0;
}