#include<iostream>
using namespace std;
//Defaualt constructor using multiple inheritence
//Default constructor,we don't need to call default constructor,compiler will call it implicitally.
class Base1{
    int data1;
    public:
        Base1(){
            cout<<"You are in Base1."<<endl;
            cout<<"Enter a number>>"<<endl;
            cin>>data1;
        }
        void show_data1(){
            cout<<data1<<endl;
        }
};

class Base2:public Base1{
    int data2;
    public:
        Base2(){
            cout<<"You are in Base2."<<endl;
            cout<<"Enter a number>>"<<endl;
            cin>>data2;
        }
        void show_data2(){
            cout<<data2<<endl;
        }
};

class Base3:public Base2{
    int data3;
    public:
        Base3(){
            cout<<"You are in Base3."<<endl;
            cout<<"Enter a number>>"<<endl;
            cin>>data3;
        }
        void show_data3(){
            cout<<data3<<endl;
        }
};

int main(){
    Base3 B3;
    B3.show_data1();
    B3.show_data2();
    B3.show_data3();
    return 0;
}