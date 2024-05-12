#include<iostream>
using namespace std;

class check
{
    int x,y;
    public:
        check(int a,int b)
        {
            x=a;
            y=b;
        }
        check()
        {
            x=0;y=0;
        }
        void show_data()
        {
            cout<<x<<" "<<y<<endl;
        }
};

int main()
{
    check c1,c2(4,5),c3(c2);
    c1.show_data();
    c2.show_data();
    c3.show_data();
    return 0;
}