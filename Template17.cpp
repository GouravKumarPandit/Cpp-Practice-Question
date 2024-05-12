#include<iostream>
using namespace std;

template <class T>
class Practice{
    T x,y;
    int size;
    public:
        void set_data(T,T,int);
        void show_data(){
            cout<<x<<" , "<<y<<" , "<<size<<endl;
        }
};

template <class T>
void Practice<T>:: set_data(T x,T y,int size){
            this->x=x;
            this->y=y;
            this->size=size;
        }

int main(){
    Practice<float> P1;
    P1.set_data(10.50,20.75,5);
    P1.show_data();
    return 0;
}