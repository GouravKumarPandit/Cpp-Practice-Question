#include<iostream>
using namespace std;

template<class T1,class T2>
class Practice{
    T1 x;
    T2 y;
    int size;
    public:
        //void set_data(T1,T2,int);
        Practice(T1,T2,int);
        void show_data(){
            cout<<x<<" ,  "<<y<<" , "<<size<<endl;
        }
};
/*template<class T1,class T2>
void Practice<T1,T2>:: set_data(T1 x,T2 y,int size){
    this->x = x;
    this->y = y;
    this->size = size;
}*/
template<class T1,class T2>
Practice<T1,T2>:: Practice(T1 x,T2 y,int size){
    this->x = x;
    this->y = y;
    this->size = size;
}

int main(){
    Practice<char,float> P1('A',20.50,5);
    P1.show_data();
    return 0;
}