#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int a,b;
    cout<<"Enter a number>>"<<endl;
    cin>>a;
    cout<<"Enter a number>>"<<endl;
    cin>>b;
    cout<<"Value of a="<<setw(5)<<a<<endl;
    cout<<"Value of b="<<setw(5)<<b<<endl;
    return 0;
}