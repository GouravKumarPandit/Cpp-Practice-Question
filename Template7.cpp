#include<iostream>
using namespace std;

template <class T>
T Sum(temp X,T Y){
    return (X+Y);
}

int main(){
    cout<<"Sum of Integer>>"<<Sum(46,44)<<endl;
    cout<<"Sum of Float>>"<<Sum(78.58,45.69)<<endl;
    return 0;
}