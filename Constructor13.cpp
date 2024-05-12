#include <iostream>
using namespace std;

class check
{
    int x, y;

public:
    check(int a, int b);
    check();
    void show_data()
    {
        cout << x << " " << y << endl;
    }
};

check::check(int a, int b) : x(a), y(b)
{
}
check::check() : x(0), y(0)
{
}

int main()
{
    check c1, c2(10, 20);
    check c3(c2);
    check(5, 6);
    c1.show_data();
    c2.show_data();
    c3.show_data();
    check(5, 6).show_data();
    return 0;
}