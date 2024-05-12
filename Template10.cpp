#include<iostream>
using namespace std;
//Tempalte Function Overloading
template <class t>
t Sum(t a,t b){
    return (a+b);
}

template <class t>
t Sum(t a,t b,t c){
    return (a+b+c);
}

int main(){
    cout<<"Sum of two integer>>"<<Sum(40,50)<<endl;
    cout<<"Sum of two float>>"<<Sum(40.58,50.12)<<endl;

    cout<<"Sum of three integer>>"<<Sum(40,50,60)<<endl;
    cout<<"Sum of three float>>"<<Sum(40.58,50.12,60.45)<<endl;
    return 0;
}