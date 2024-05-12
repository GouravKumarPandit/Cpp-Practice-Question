#include <iostream>
using namespace std;

class calculate
{
    int r;
    float a;

public:
    void set_data(void)
    {
        cout << "Enter the size of radius>>" << endl;
        cin >> r;
    }
    void area(void)
    {
        a = 3.14 * r * r;
        cout << "Area>>" << a << endl;
    }
};

int main()
{
    calculate r1, r2, r3;
    r1.set_data();
    r1.area();
    r2.set_data();
    r2.area();
    r3.set_data();
    r3.area();
    return 0;
}