#include<iostream>
using namespace std;

template <class t1,class t2>
void BigOrNot(t1 X,t2 Y){
    if(X>Y)
        cout<<X<<" is bigger number."<<endl;
    else
        cout<<Y<<" is bigger number."<<endl;
}

template <class t>
void BigOrNot(t X,t Y,t Z){     //Using ternary operator
    t A;
    A=(X>Y)?((X>Z)?X:Z):((Y>Z)?Y:Z);
    cout<<A<<" is bigger number."<<endl;
}

int main(){
    BigOrNot(45,45.85);
    BigOrNot(40,39);
    BigOrNot(10,30,20);
    return 0;
}
