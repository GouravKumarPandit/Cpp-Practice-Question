#include <iostream>
using namespace std;

class area
{
    int a;
    float b;

public:
    void set_data(int r)
    {
        a = r;
    }
    float areaa(void)
    {
        b = (3.14 * a * a);
        return b;
    }
};

int main()
{
    area a1, a2, a3;
    int r1, r2, r3;
    float a11, a22, a33;
    cout << "Enter radius of first circle>>" << endl;
    cin >> r1;
    cout << "Enter radius of second circle>>" << endl;
    cin >> r2;
    cout << "Enter radius of third circle>>" << endl;
    cin >> r3;
    a1.set_data(r1);
    a11 = a1.areaa();
    cout << "Area of first circle is>>" << a11 << endl;
    a2.set_data(r2);
    a22 = a2.areaa();
    cout << "Area of second circle is>>" << a22 << endl;
    a3.set_data(r3);
    a33 = a3.areaa();
    cout << "Area of third circle is>>" << a33 << endl;
    return 0;
}