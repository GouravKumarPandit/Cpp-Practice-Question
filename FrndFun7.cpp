#include<iostream>
using namespace std;

class com1{
    int x,y;
    public:
        com1(int a,int b){
            x=a;y=b;
        }
        void show_data(){
            cout<<x<<" "<<y<<endl;
        }
        friend void operator-(com1);
};
class com2{
    int x,y;
    public:
        com2(){}
        void show_data(){
            cout<<x<<" "<<y<<endl;
        }
        friend void operator-(com1);
};
void operator-(com1 c1){
    com2 c2;
    c2.x=-c1.x;
    c2.y=-c1.y;
    c2.show_data();
}
int main(){
    com1 c1(4,5);
    c1.show_data();
    operator-(c1);
    return 0;
}