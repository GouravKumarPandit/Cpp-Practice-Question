#include<iostream>
using namespace std;

class com2;
class com1{
    int x,y;
    public:
        com1(int a,int b):x(a),y(b){}
        void show_data(){
            cout<<x<<" "<<y<<endl;
        }
        friend com2 operator++(com1);
};
class com2{
    int x,y;
    public:
        com2(){}
        void show_data(){
            cout<<x<<" "<<y<<endl;
        }
        friend com2 operator++(com1);
};
com2 operator++(com1 c1){
    com2 c2;
    c2.x=++c1.x;
    c2.y=++c1.y;
    return c2;
}
int main(){
    com1 c1(4,5);
    c1.show_data();
    com2 c3;
    c3=operator++(c1);
    c3.show_data();
    return 0;
}