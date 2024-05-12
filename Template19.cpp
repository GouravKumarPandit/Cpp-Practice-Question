#include<iostream>
using namespace std;

template<class T1,class T2>
class Practice{
    T1 x;
    T2 y;
    public:
        Practice(T1,T2);
        void show_data(){
            cout<<x<<", "<<y<<endl;
        }
};
template<class T1,class T2>
Practice<T1,T2>:: Practice(T1 x,T2 y){
    this->x=x;
    this->y=y;
}

int main(){
    Practice<int,float> P1(10,20.25);
    P1.show_data();
    return 0;
}