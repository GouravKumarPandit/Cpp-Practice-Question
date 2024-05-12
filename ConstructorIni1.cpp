#include<iostream>
using namespace std;

class Base{
    int a,b;  //Here a is initialize first so we can not use a in b for set the value of b
    public:
        Base(int x,int y):b(y),a(x)   //Constructor initializer
        { }
        void show_data(){
            cout<<a<<" "<<b<<endl;       
        }
};

int main(){
    Base b1(10,20);
    b1.show_data();
    return 0;
}