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
    void show_data()
    {
        cout << x << " " << y << endl;
    }
    friend com2 sum(com1, com2);
};
class com2
{
    int g, j;

public:
    com2(int a, int b) : g(a), j(b) {}
    com2(){}
    void show_data()
    {
        cout << g << " " << j << endl;
    }
    friend com2 sum(com1, com2);
};

com2 sum(com1 c1, com2 c2)
{
    com2 c3;
    c3.g = c1.x + c2.g;
    c3.j = c1.y + c2.j;
    return c3;
}

int main()
{
    com1 c1(4,5);
    com2 c2(6,7), c3;
    c1.show_data();
    c2.show_data();
    c3 = sum(c1, c2);
    c3.show_data();
    return 0;
}