#include<iostream>
using namespace std;
//Constructor using Hierarchical inheritence
class Base{
    int data1,data2;
    public:
        Base(int a,int b){
            data1=a;
            data2=b;
            cout<<"You are in base class."<<endl;
        }
        void show_data(){
            cout<<data1<<" , "<<data2<<endl;
        }
};

class Derieved1:public Base{
    int data3,data4;
    public:
        Derieved1(int a,int b,int c,int d):Base(c,d){
            data3=a;
            data4=b;
            cout<<"You are in Derieved class."<<endl;
        }
        void show_data(){
            Base::show_data();
            cout<<data3<<" , "<<data4<<endl;
        }
};

class Derieved2:public Base{
    int data5,data6;
    public:
        Derieved2(int e,int f,int g,int h):Base(g,h),data5(e),data6(f){
            cout<<"You are in derieved2 class."<<endl;
        }
        void show_data(){
            Base::show_data();
            cout<<data5<<" , "<<data6<<endl;
        }
};

int main(){
    Derieved1 d1(10,20,30,40);
    d1.show_data();
    Derieved2 d2(50,60,70,80);
    d2.show_data();
    return 0;
}