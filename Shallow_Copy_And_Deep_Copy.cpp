#include<iostream>
using namespace std;

class Dummy{
    int a,b;
    int* P;
    public:
        Dummy(){
            P=new int;
        }
        void set_data(int a,int b,int c){
            this->a=a;
            this->b=b;
            *P=c;
        }
        void show_data(){
            cout<<a<<" "<<b<<" "<<*P<<endl;
        }
        Dummy(Dummy &D1){      //Deep copy and it is not happened automatically we have to make the copy constuctor
            a=D1.a;
            b=D1.b;
            P=new int;      //Point to a new memory block
            *P=*(D1.P);
        }
};

int main(){
    Dummy D1;
    D1.set_data(10,20,30);
    D1.show_data();
    Dummy D2(D1);    //Calling copy constructor automatically
    //Dummy D2;
    //D2=D1; //Implicit copy assingment operator
    cout<<"After copy automatically>>"<<endl;
    D2.show_data();
    return 0;
}