#include<iostream>
using namespace std;

class com2;
class com1{
    int x,y;
    public:
        void set_data(){
            cout<<"Enter two number>>"<<endl;
            cin>>x>>y;
        }
        void show_data(){
            cout<<x<<" "<<y<<endl;
        }
        friend void operator-(com1,com2);
};
class com2{
    int x,y;
    public:
        void set_data(){
            cout<<"Enter two number>>"<<endl;
            cin>>x>>y;
        }
        void show_data(){
            cout<<x<<" "<<y<<endl;
        }
        friend void operator-(com1,com2);
};
void operator-(com1 c1,com2 c2){
    com2 c3;
    c3.x=c1.x-c2.x;
    c3.y=c1.y-c2.y;
    c3.show_data();
}
int main(){
    com1 c1;
    c1.set_data();
    c1.show_data();
    com2 c2;
    c2.set_data();
    c2.show_data();
    operator-(c1,c2);
    return 0;
}