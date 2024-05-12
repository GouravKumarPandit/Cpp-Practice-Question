#include<iostream>
using namespace std;

class check
{
    int x,y;
    public:
        check()                    //Default contructor
        { 
            cout<<"You are in Constructor!!"<<endl;
        }
        check(int a,int b)        //Paramiterized contructor
        {
            x=a;y=b;
        }
        check(int c)
        {
            x=c;
        }
        void show_data()
        {
            cout<<x<<" "<<y<<endl;
        }
};

int main()
{
    check c1,c2=check(4,5),c3=6;
    c2.show_data();
    c3.show_data();
    return 0;
}