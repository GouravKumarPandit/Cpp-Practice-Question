#include<iostream>
using namespace std;
template <class temp1,class temp2>
class Complex{
    temp1 data1;
    temp2 data2;
    int data3;
    public:
        Complex(temp1,temp2);     //Constructor Declaration
        void set_data(int X){
            data3 = X;
        }
        Complex(){}
        void show_data(){
            cout<<data1<<" "<<data2<<" "<<data3<<endl;
        }
};
template <class temp1,class temp2>   //Constructor definition wih class template
Complex <temp1,temp2> :: Complex(temp1 x,temp2 y){
        data1 = x;
        data2 = y;
}
int main(){
    Complex <int,char> C(45,'A');
    Complex <int,float> C1(52,87.58);
    Complex <int,float> C2;
    C2.set_data(50);
    C.show_data();
    C1.show_data();
    C2.show_data();
    return 0;
}