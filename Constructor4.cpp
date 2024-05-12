#include<iostream>
#define PI 3.14
using namespace std;

class area
{
    int x,y,z;
    public:
        area()
        {
            cout<<"Enter the size if radius>>"<<endl;
            cin>>x;
        }
        area(int d,int e)
        {
            x=d;
            y=e;
        }
        area(int a,int b,int c)
        {
            x=a;
            y=b;
            z=c;
        }
        float Area1(void);
        int Area2(void);
        int Area3(void);

        void show_Cdata()
        {
            cout<<x<<endl;
        }
        void show_Rdata()
        {
            cout<<x<<" "<<y<<endl;
        }
        void show_Cudata()
        {
            cout<<x<<" "<<y<<" "<<z<<endl;
        }
};

float area:: Area1(void)
{
    return (PI*x*x);
}
int area:: Area2(void)
{
    return (x*y);
}
int area:: Area3(void)
{
    return (x*y*z);
}

int main()
{
    area a1,a2=area(7,8),a3(3,4,5);
    a1.show_Cdata();
    a2.show_Rdata();
    a3.show_Cudata();

    cout<<"Area of Circle>>"<<a1.Area1()<<endl;
    cout<<"Area of a Rectangle>>"<<a2.Area2()<<endl;
    cout<<"Area of a Cube>>"<<a3.Area3()<<endl;
    return 0;
}