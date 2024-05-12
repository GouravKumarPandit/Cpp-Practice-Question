#include<iostream>
using namespace std;

class b;
class a{
    int x;
    public:
        void setData(int a){
            cout<<"You are in A"<<endl;
            x=a;
        }
        void show_Data(){
            cout<<x<<endl;
        }
        //friend class b;
};
class b{
    int x=10,y;
    public:
        void show_data(){
            cout<<"You are in B"<<endl;
            //a1.show_Data();
            //y=x+a1.x;
            //cout<<y;
            a a1;
            a1.setData(10);
            a1.show_Data();
        }
};
int main(){
    a a1;
    a1.setData(5);
    a1.show_Data();
    b b1;
    b1.show_data();
    return 0;
}