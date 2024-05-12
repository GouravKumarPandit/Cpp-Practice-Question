#include<iostream>
using namespace std;
class first;
class second{
    int x,y,add1,add2;
    public:
        second(int a,int b){
            x=a;y=b;
        }
        void show_data(void){
            cout<<x<<" "<<y<<endl;
        }
        void sum(first f1);         //We create frnd func
        
        void showAdd(void){
            cout<<add1<<" "<<add2<<endl;
        }
};
class first{
    int x,y;
    public:
        void set_data(int a,int b){
            x=a;y=b;        
        }
        void show_data(){
            cout<<x<<" "<<y<<endl;
        }
        friend void second::sum(first);   //Only create one frnd method
};
void second::sum(first f1){      
            add1=x+f1.x;
            add2=y+f1.y;
        }
int main(){
    first f1;
    f1.set_data(5,10);
    f1.show_data();
    second s1(10,20);
    s1.show_data();
    s1.sum(f1);
    s1.showAdd();
    return 0;
}