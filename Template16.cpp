#include<iostream>
using namespace std;

template <class T>
class BigOrNot{
    T x,y;
    public:
        BigOrNot(T x,T y){
            this->x=x;
            this->y=y;
        }
        T check(void);
};

template <class T>
T BigOrNot<T>:: check(){
    return (x>y)?x:y;
}

int main(){
    BigOrNot<int> B1(10,20);
    int res=B1.check();
    cout<<"Big number>>"<<res<<endl;
    return 0;
}