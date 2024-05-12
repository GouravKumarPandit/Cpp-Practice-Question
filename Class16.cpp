#include<iostream>
using namespace std;

class check{
    int x;
    public:
        void set_data(void){
            cout<<"Enter a number>>"<<endl;
            cin>>x;
        }
        void show_data(void) const{
            x=x*2; //we can't change the value of constant data member
            cout<<x<<endl;
        }
};

int main(){
    check a;
    a.set_data();
    a.show_data();
    return 0;
}