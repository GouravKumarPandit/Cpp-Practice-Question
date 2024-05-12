#include<iostream>
using namespace std;

class des{

    int x,y;
    public:
        des(int a,int b){
            x=a;
            y=b;
        }
        void show_data(){
            cout<<x<<" "<<y<<endl;
        }
        ~des(){
            cout<<"You are in Destructor!!"<<endl;
        }
};

int main(){
    des d1(4,5),d2(6,7);
    d1.show_data();
    d2.show_data();
    return 0;
}