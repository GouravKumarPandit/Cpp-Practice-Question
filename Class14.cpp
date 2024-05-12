#include <iostream>
using namespace std;

class nesting
{
    int x, y;

public:
    void set1(void);
    void set2(void);
    void show1(void)
    {
        cout<<"Number are>>"<<x<<y;
    }
    void show2(void)
    {
        show1();
    }
};

void nesting :: set1(void)
{
    cout<<"Enter two number>>"<<endl;
    cin>>x>>y;
}

void nesting :: set2(void)
{
    set1();
}

int main()
{
    nesting n1,n2;
    n1.set1();
    n1.show1();
    n2.set2();
    n2.show2();
    return 0;
}