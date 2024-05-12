#include <iostream>
using namespace std;

class overloading
{
    int r, l, h;

public:
    void set_data(void)
    {
        cout<<"Enter the size of radius>>"<<endl;
        cin>>r;
    }
    void set_data(int a,int b)
    {
        l=a;
        h=b;
    }
    int area(overloading &ov1)
    {
        return (3.14*r*r);
    }
    int area(void)
    {
        return (l*h);
    }
};

int main()
{
    overloading ov1,ov2;
    ov1.set_data();
    cout<<"Area of circle is >>"<<ov1.area(ov1)<<endl;
    ov2.set_data(3,4);
    cout<<"Area of rectangle is >>"<<ov2.area()<<endl;
    return 0;
}