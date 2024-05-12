#include <iostream>
using namespace std;

class des
{
    int x, y;

public:
    des(int a, int b) : x(a), y(b)
    {
    }
    des()
    {
        x = 0;
        y = 0;
    }
    void show_data()
    {
        cout << x << " " << y << endl;
    }
    ~des()
    {
    }
};

int main()
{
    des d1, d2(10, 20);
    d1.show_data();
    d2.show_data();
    return 0;
}