#include<iostream>
using namespace std;

class base{
    int a;
    public:
        int b;
        void set_data(void){
            a=10;
            b=20;
        }
        int get_data(){
            return a;
        }
};

class derived:public base{
    int c;
    public:
        void set_data1(){
            c=get_data()*b;
        }
        void show_data(){
            cout<<b<<" "<<c<<endl;
        }
};

int main(){
    derived d1;
    d1.set_data();
    d1.set_data1();
    d1.show_data();
    return 0;
}