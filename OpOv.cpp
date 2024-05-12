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
    ~op(){}
    void show_data()
    {
        cout << x << " " << y << endl;
    }
    op operator+(op c)
    {
        op temp;
        temp.x = x + c.x;
        temp.y = y + c.y;
        return temp;
    }
};

int main()
{
    op c1(4, 5), c2(6, 7), c3;
    c1.show_data();
    c2.show_data();
    c3 = c1 + c2;
    c3.show_data();
    return 0;
}