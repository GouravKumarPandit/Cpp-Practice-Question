#include<iostream>
using namespace std;
//We are creating function template
void swapp(int &x,int &y){      //Template overloading it take first priority than template
    cout<<"Your are in non template function>>"<<endl;
    int tem;
    tem=x;
    x=y;
    y=tem;
}

template<class temp>    //Creating template
void swapp(temp &x,temp &y){
    temp tem;
    tem=x;
    x=y;
    y=tem;
}

int main(){
    int a,b;
    float c,d;
    cout<<"Enter two number>>"<<endl;
    cin>>a>>b;
    swapp(a,b);
    cout<<"after swapping>>a="<<a<<" b="<<b<<endl;

    cout<<"Enter two number>>"<<endl;
    cin>>c>>d;
    swapp(c,d);
    cout<<"after swapping>>a="<<c<<" b="<<d<<endl;
    return 0;
}