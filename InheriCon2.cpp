#include<iostream>
using namespace std;
//Constructor in multilevel inheritence
class Base1{
    int data1;
    public:
        Base1(int x){
            data1=x;
            cout<<"You are in Base1."<<endl;
        }
        void show_data(){
            cout<<"Data>>"<<data1<<endl;
        }
};

class Base2{
    int data2;
    public:
        Base2(int y){
            data2=y;
            cout<<"You are in Base2."<<endl;
        }
        void show_data(){
            cout<<"Data>>"<<data2<<endl;
        }
};

class Derived:public Base1,public Base2{
    int data3;
    public:
        Derived(int a,int b,int c):Base1(a),Base2(b){
            data3=c;
        }
        void show_data(){
            Base1::show_data();    //Ambiguouty resolve
            Base2::show_data();
            cout<<"Data3>>"<<data3<<endl;
        }
};

int main(){
    Derived d(10,20,30);
    d.show_data();
    return 0;
}