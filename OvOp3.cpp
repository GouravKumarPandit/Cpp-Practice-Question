#include<iostream>
using namespace std;

class op{
    int x,y;
    public:
        op(int a,int b):x(a),y(b){}
        op(){}
        op operator++(void){
            op temp;
            temp.x=++x;
            temp.y=++y;
            return temp;
        }  
        op operator++(int){
            op temp;
            temp.x=x++;
            temp.y=y++;
            return temp;
        }
        op operator-(void){
            op temp;
            temp.x=-x;
            temp.y=-y;
            return temp;
        }
        op operator--(void){
            op temp;
            temp.x=--x;
            temp.y=--y;
            return temp;
        }      
        op operator--(int ){
            op temp;
            temp.x=x--;
            temp.y=y--;
            return temp;
        }      
        void show_data(){
            cout<<x<<" "<<y<<endl;
        }
};

int main(){
    op o1(4,5),o2;
    o1.show_data();
    //o2=++o1;
    //o2=o1++;
    //o2=-o1;
    o2=--o1;
    o2.show_data();
    //o1.show_data();
    return 0;
}