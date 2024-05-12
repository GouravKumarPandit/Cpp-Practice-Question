#include<iostream>
using namespace std;
//Construcor in Multilevel inheritence :- C-->B-->A Calling first derieved and ecxecute first Parent

class Base1{
    int data1;
    public:
        Base1(int x){
            data1=x;
            cout<<"You are in Base1"<<endl;
        }
        void show_data(){
            cout<<"Data1>>"<<data1<<endl;
        }
};

class Base2:public Base1{
    int data2;
    public:
        Base2(int y,int x):Base1(x){
            data2=y;
            cout<<"You are in Base2"<<endl;
        }
        void show_data(){
            cout<<"Dat2>>"<<data2<<endl;
        }
};

class Base3:public Base2{
    int data3;
    public:
        Base3(int z,int y,int x):Base2(y,x){
            data3=z;
            cout<<"You are in Base3"<<endl;
        }
        void show_data(){
            Base1::show_data();
            Base2::show_data();
            cout<<"Dat3>>"<<data3<<endl;
        }
};

int main(){
    Base3 b(10,20,30);
    b.show_data();
    return 0;
}