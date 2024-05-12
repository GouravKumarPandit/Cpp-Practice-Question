#include<iostream>
using namespace std;

template <class temp>
class Complex{
    temp data1 , data2;
    public:
        void set_data(temp,temp);

        Complex operator+(Complex &C){     //Operator overloading
            Complex tem;
            tem.data1=this->data1+C.data1;
            tem.data2=this->data2+C.data2;
            return tem;
        }

        void show_data();
};

template <class temp>
void Complex <temp> :: set_data(temp x,temp y){
    data1 = x;
    data2 = y;
}

template <class temp>
void Complex <temp> :: show_data(){
    cout<<data1<<" "<<data2<<endl;
}

int main(){
    Complex <int> C1;   //We have to declare sepratally each object
    Complex <int> C2;
    Complex <int> C3;

    C1.set_data(45,85);
    C1.show_data();

    C2.set_data(45,80);
    C2.show_data();

    C3=C1+C2;          // ==== C1.ADD(Complex C)
    C3.show_data();
    return 0;
}