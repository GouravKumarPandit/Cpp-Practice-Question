#include<iostream>
using namespace std;

template <class t>
void Swapp(t &X,t &Y){
    t temp;
    temp = X;
    X = Y;
    Y = temp;
}

int main(){
    int x=10,y=20;
    Swapp(x,y);
    cout<<"After swapping>> X = "<<x<<" and Y = "<<y<<endl;
    float X=10.5,Y=20.50;
    Swapp(X,Y);
    cout<<"After swapping>> X = "<<X<<" and Y = "<<Y<<endl;
    return 0;
}