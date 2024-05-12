#include<iostream>
using namespace std;

template <class T=int>      //Default template
class Practice{
    T x,y;
    int size;
    public:
        Practice(T,T,int);
        void show_data(){
            cout<<x<<" , "<<y<<" , "<<size<<endl;
        }
};

template <class T>
Practice<T>:: Practice(T x,T y,int size){
    this->x=x;
    this->y=y;
    this->size=size;
}

int main(){
    Practice<> P1(10,20,10);    //We dont't need to pass any data type when we create default template
    P1.show_data();
    return 0;
}