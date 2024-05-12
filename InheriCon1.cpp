#include<iostream>
using namespace std;
//Constructor in Single lavel inheritence
class Base1{
    int data1,data2;
    public:
        Base1(int x,int y){
            data1=x;
            data2=y;
            cout<<"You are in Base1."<<endl;
        }
        void show_data(){
            cout<<"Data1>>"<<data1<<endl;
            cout<<"Data2>>"<<data2<<endl;
        }
};

class Base2:public Base1{
    int data3,data4;
    public:
        Base2(int a,int b,int c,int d):Base1(c,d){
            data3=a;
            data4=b;
            cout<<"You are in Base2."<<endl;
        }
        void show_data(){
            Base1::show_data();
            cout<<"Data3>>"<<data3<<endl;
            cout<<"Data4>>"<<data4<<endl;
        }
};

int main(){
    Base2 b2(1,2,3,4);
    b2.show_data();
    return 0;
}
