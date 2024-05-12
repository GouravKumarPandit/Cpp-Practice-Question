#include <iostream>
using namespace std;

class op
{
    int x, y;

public:
    op(int a, int b)
    {
        x = a;
        y = b;
    }
    op() {}
    void show_data()
    {
        cout << x << " " << y << endl;
    }
    op operator-(op c)
    {
        op temp;
        temp.x = x - c.x;
        temp.y = y - c.y;
        return temp;
    }
    op operator*(op o){
        op temp;
        temp.x=x*o.x;
        temp.y=y*o.y;
        return temp;
    }
    op operator/(op o){
        op temp;
        temp.x=x/o.x;
        temp.y=y/o.y;
        return temp;
    }
};

int main()
{
    op o1(4, 5), o2(48, 25), o3;
    o1.show_data();
    o2.show_data();
    /*o3 = o1 - o2;
    o3.show_data();
    o3=o1*o2;
    o3.show_data();
    o3=o2/o1;
    o3.show_data();*/
    return 0;
}