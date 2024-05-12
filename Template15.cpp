#include<iostream>
using namespace std;

template <class T>
class Swapp{
    T x,y;
    public:
        void set_data(T x,T y){
            this->x=x;
            this->y=y;
        }
        void Swapping(void);
        void show_data(void){
            cout<<x<<" , "<<y<<endl;
        }
};

template <class T>
void Swapp<T>:: Swapping(){
            T temp;
            temp = x;
            x = y;
            y = temp;
        }

int main(){
    Swapp<int> S1;
    S1.set_data(10,20);
    cout<<"Before Swapping>>"<<endl;
    S1.show_data();
    S1.Swapping();
    cout<<"After Swapping>>"<<endl;
    S1.show_data();
    return 0;
}