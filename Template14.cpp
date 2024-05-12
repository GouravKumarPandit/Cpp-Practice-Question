#include<iostream>
using namespace std;

//Normal Life
/*class Practice{         
    int x,y;
    public:
        Practice(int x,int y){
            this->x=x;
            this->y=y;
        }
        void show_data(){
            cout<<x<<" , "<<y<<endl;
        }
};

int main(){
    Practice P1(10,20);
    P1.show_data();
    return 0;
}*/

//Mentos Life
template <class T>
class Practice{
    T x,y;
    public:
        Practice(T x,T y){
            this->x=x;
            this->y=y;
        }
        void show_data(){
            cout<<x<<" , "<<y<<endl;
        }
};

int main(){
    Practice <int> P1(10,20);
    P1.show_data();
    return 0;
}

