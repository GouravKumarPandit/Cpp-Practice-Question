#include<iostream>
using namespace std;

class first;     //forward decleration
class second{
    int x,y;
    public:
    void set_data(){
        cout<<"Enter two number>>"<<endl;
        cin>>x>>y;       
    }
    void show_data(){
        cout<<x<<" "<<y<<endl;
    }
    void operator++(){       //operator overloading
        x=++x;
        y=++y;
    }
    void oper(first,first);     //function decleration
};
class first{
    int x,y;
    public:
        void set_data(void){
            cout<<"Enter two number>>"<<endl;
            cin>>x>>y;
        }
        void show_data(){
            cout<<x<<" "<<y<<endl;
        }
        friend void second::oper(first,first);   //friend function decleration
};
void second::oper(first f1,first f2){       //friend function definition
    x=f1.x+f2.x;
    y=f1.y+f2.y;
}

int main(){
    first f1,f2;
    f1.set_data();
    f2.set_data();
    f1.show_data();
    f2.show_data();
    second s1,s2;
    s2.set_data();
    s2.show_data();
    s2.operator++();
    s2.show_data();

    s1.oper(f1,f2);
    s1.show_data();
    return 0;
}