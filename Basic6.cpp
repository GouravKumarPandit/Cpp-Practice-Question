#include<iostream>
using namespace std;

int main(){
    int a;
    int &b=a;
    cout<<"Enter a value=";
    cin>>a;
    cout<<"Value of a="<<b;
    return 0;
}