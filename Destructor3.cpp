#include <iostream>
using namespace std;

class des
{
    int x, y;

public:
    des(int, int);
    des()
    {
        x = 0;
        y = 0;
    }
    ~des()
    {
    }
    void show_data()
    {
        cout << x << " " << y << endl;
    }
};
des::des(int a, int b) : x(a), y(b)
{
}
int main()
{
    des d1, d2(10, 20);
    d1.show_data();
    d2.show_data();
    return 0;
}
