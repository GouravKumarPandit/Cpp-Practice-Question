#include<iostream>
using namespace std;

class Dynamic{
    int x,y;
    public:
        Dynamic& set_data(int x,int y){
            this->x=x;
            this->y=y;
            return* this;  //returning address by this pointer
        }
        void show_data(void){
            cout<<x<<" "<<y<<endl;
        }
};

int main(){
    Dynamic* ptr;
    int a,b,i;
    ptr=new Dynamic[3];
    for(i=0;i<3;i++){
        cout<<"Enter two number>>"<<endl;
        cin>>a>>b;
        //(ptr+i)->set_data(a,b).show_data();  // we can call those method by two ways bt this or
        ptr[i].set_data(a,b).show_data();     // this way
    }
    delete [] ptr;
    return 0;
}