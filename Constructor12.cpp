#include <iostream>
using namespace std;

class copi
{
    int x, y;

public:
    copi(int a, int b)
    {
        x = a;
        y = b;
    }
    copi(copi &c)
    {
        x = c.x;
        y = c.y;
    }
    void show_data(void)
    {
        cout << x << " " << y << endl;
    }
};

int main()
{
    copi c1(4, 5);
    copi c2(6, 7);
    copi c3(c2);
    c1.show_data();
    c2.show_data();
    c3.show_data();

    return 0;
}