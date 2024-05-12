#include<iostream>
using namespace std;
//Hybrid inheritence using constructor
class A{
    protected:
        int a;
    public:
        void set_data(int x){
            a=x;
        }
        void show_data(){
            cout<<a<<endl;
        }
};

class B:virtual public A{
    protected:
        int b;
    public:
        void set_data(int y,int x){
            A::set_data(x);
            b=x;
        }
        void show_data(){
            A::show_data();
            cout<<b<<endl;
        }
};

class C:virtual public A{
    protected:
        int c;
    public:
        void set_data(int z,int x){
            A::set_data(x);
            c=x;
        }
        void show_data(){
            A::show_data();
            cout<<c<<endl;
        }
};

class D:public B,public C{
        int d;
    public:
        void set_data(int o,int m,int n,int p){
        B::set_data(o,m);
        C::set_data(o,n);
        d=p;       
    }
    void show_data(){
        B::show_data();
        C::show_data();
        cout<<d<<endl;
    }
};

int main(){
    B b1;
    b1.set_data(4,5);
    b1.show_data();
    C c1;
    c1.set_data(4,7);
    c1.show_data();
    D d1;
    d1.set_data(4,5,7,8);
    d1.show_data();
    return 0;
}