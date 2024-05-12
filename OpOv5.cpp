#include <iostream>
using namespace std;

class ope
{
    float x, y;

public:
    ope(float a, float b)
    {
        x = a;
        y = b;
    }
    ope() {}
    ope operator+(ope o)
    {
        ope temp;
        temp.x = x + o.x;
        temp.y = y + o.y;
        return temp;
    }
    void show_data(void)
    {
        cout << x << " " << y << endl;
    }
};

int main()
{
    ope o1 = ope(4.5, 5.5), o2 = ope(7.8, 8.9), o3; //Explicit Constructor
    o1.show_data();
    o2.show_data();
    o3 = o1 + o2;
    o3.show_data();
    return 0;
}