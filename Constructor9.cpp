#include <iostream>
using namespace std;

class check
{
    int x, y;

public:
    check(int, int);
    void show_data(void)
    {
        cout << "X>>" << x << ","
             << "y>>" << y << endl;
    }
};
check::check(int a, int b)
{
    x = a;
    y = b;
}
int main()
{
    check c1 = check(10, 20);
    check c2(30, 40);
    c1.show_data();
    c2.show_data();
    return 0;
}