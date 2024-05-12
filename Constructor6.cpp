#include<iostream>
using namespace std;

class check
{
    int x;
    public:
        check(int a)
        {
            cout<<"You are in constructor>>"<<endl;
            x=a;
        }
        void show_data(void)
        {
            cout<<x<<endl;
        }
};




int main()
{
    int a;
    cout<<"Enter a number>>"<<endl;
    cin>>a;
    check c1(a),c2=c1;
   
    c1.show_data();
    c2.show_data();
    return 0;
}