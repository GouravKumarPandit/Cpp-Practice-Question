#include<iostream>
using namespace std;
//Creting calculator by using template class 
template <class T>
class calculator{
    T x,y;       //Creating template variable
    public:
        calculator & set_data(T x,T y){      
            this-> x = x;      //using this pointer 
            this-> y = y; 
            return *this;            
        }
        void show_data(){
            cout<<"Enter number are >>"<<x<<" and "<<y<<endl;
        }
        void addition(void);
        void subtraction(void);
        void multiplication(void);
        void division(void);
        void Calculator(void){
            addition();
            subtraction();
            multiplication();
            division();
        }
};
template <class T>
void calculator <T> :: addition(){
    cout<<"Addition of "<<x<<" and "<<y<<" is >> "<<x+y<<endl;    
}
template <class T>
void calculator <T> :: subtraction(){
    cout<<"Subtraction of "<<x<<" and "<<y<<" is >> "<<x-y<<endl;    
}
template <class T>
void calculator <T> :: multiplication(){
    cout<<"Multiplication of "<<x<<" and "<<y<<" is >> "<<x*y<<endl;    
}
template <class T>
void calculator <T> :: division(){
    cout<<"Division of "<<x<<" and "<<y<<" is >> "<<x/y<<endl;    
}

int main(){
    calculator <int> c1;
    calculator <float> c2;
    c1.set_data(10,5).show_data();
    c1.Calculator();
    c2.set_data(20.50,10.75).show_data();
    c2.Calculator();
    return 0;
}