#include<iostream>
using namespace std;

template <class temp>
class Practice{
    temp x,y;
    public:
        Practice(temp x,temp y){
            this->x=x;
            this->y=y;
        }
        Practice(temp x){
            this->x=x;
        }
        void show_data(){
            cout<<x<<" "<<y<<endl;
        }
};

int main(){
    Practice <int> P(45,65);    //Creating template object 
    Practice <int> P1(50);      // We can pass one value but we need to make a single parameter constructor which recieve single value
    P.show_data();
    P1.show_data();
    return 0;
}