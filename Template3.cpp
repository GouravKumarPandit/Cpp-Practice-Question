#include<iostream>
using namespace std;

template <class temp1,class temp2>
void Print(temp1 x,temp2 y){       
    temp1 a;
    temp2 b;
    a=x;
    b=y;
    cout<<a<<" "<<b<<endl;
}

int main(){
    Print(4,'G');
    Print(5.8,"ASHWANI");
    Print(5.6,6.8);
    return 0;
}