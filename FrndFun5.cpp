#include <iostream>
using namespace std;

class com2;
class com1
{
    int x, y;

public:
    com1(int a, int b)
    {
        x = a;
        y = b;
    }
    void show_data(void)
    {
        cout << x << " " << y << endl;
    }
    friend com2 operator*(com1, com2);
};
class com2
{
    int x, y;

public:
    void set_data(void)
    {
        cout << "Enter two number>>" << endl;
        cin >> x >> y;
    }
    com2()
    {
        x = 0;
        y = 0;
    }
    void show_data(void)
    {
        cout << x << " " << y << endl;
    }
    friend com2 operator*(com1, com2);
};
com2 operator*(com1 c1, com2 c2)
{
    com2 c3;
    c3.x = c1.x * c2.x;
    c3.y = c1.y * c2.y;
    return c3;
}
int main()
{
    com1 c1(4, 5);
    c1.show_data();
    com2 c2;
    c2.set_data();
    c2.show_data();
    com2 c3;
    c3 = operator*(c1, c2);
    cout << "After multiplication>>" << endl;
    c3.show_data();
    return 0;
}