#include<iostream>
using namespace std;

class Dynamic{
    int a,b;
    public:
        void set_data(int a,int b){
            this->a=a;
            this->b=b;
        }
        void show_data(void){
            cout<<a<<" "<<b<<endl;
        }
};
int main(){
    Dynamic* D;
    int x,y,i;
    D=new Dynamic[3];    //Dynamically alloacte 3 object
    for(i=0;i<3;i++){
        cout<<"Enter two number>>"<<endl;
        cin>>x>>y;
        (D+i)->set_data(x,y);
    }
    for(i=0;i<3;i++){
        (D+i)->show_data();
    }
    return 0;
}