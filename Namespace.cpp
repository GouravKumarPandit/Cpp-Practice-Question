#include<iostream>
using namespace std;

namespace Myspace{
    int add(int,int);
    int subtraction(int,int);
    int multiplication(int,int);
    int division(int,int);
}

int Myspace:: add(int x,int y){
    return (x+y);
}

int Myspace:: subtraction(int x,int y){
    return (x-y);
}

int Myspace:: multiplication(int x,int y){
    return (x*y);
}

int Myspace:: division(int x,int y){
    return (x/y);
}

using namespace Myspace;
int main(){
    cout<<"Calulator>>"<<endl;
    
    cout<<add(20,10)<<endl;    
    cout<<subtraction(20,10)<<endl;    
    cout<<multiplication(20,10)<<endl;
    cout<<division(20,10)<<endl;

    return 0;
}