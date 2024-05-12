#include<iostream>
using namespace std;

class op{
    int x,y;
    public:
        op(int,int);
        op(){}
        void show_data(){
            cout<<x<<" "<<y<<endl;
        }
        void operator+=(op o){
            x=x+o.x;
            y=y+o.y;        
        }
};
op::op(int a,int b){
    x=a;y=b;
}
int main(){
    op o1(4,5),o2(6,7);
    o1.show_data();
    o2.show_data();
    o1+=o2;            //o1=o1+o2;
    o1.show_data();
    return 0;
}