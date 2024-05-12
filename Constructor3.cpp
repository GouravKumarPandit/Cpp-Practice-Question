#include <iostream>
using namespace std;

class check
{
    int x, y;

public:
    check()                                       //Default Constructor
    {
        x = 0;
        y = 0;
    }
    check(int a, int b)                           //Parameterized Constructor
    {
        x = a;
        y = b;
    }
    check(check &c)                               //Copy Cunstructor
    {
        x = c.x;
        y = c.y;
    }
    void show_data()
    {
        cout << x << " " << y << endl;
    }
};

int main()
{
    check c1, c2(2, 4);
    check c3(c2),c4(5,6);
    check c5=c4;

    c1.show_data();
    c2.show_data();
    c3.show_data();
    c4.show_data();
    c5.show_data();
    return 0;
}