#include <iostream>
using namespace std;

class check
{
    int x, y;

public:
    check() //Defaulat Constructor
    {
        x = 0;
        y = 0;
    }
    void set_data(int a, int b) //Function decleration & definition inside the class
    {
        x = a;
        y = b;
    }
    void show_data()
    {
        cout << x << "," << y << endl;
    }
    check(int a, int b) //Parameterized Constructor
    {
        x = a;
        y = b;
    }
    check(check &c) //Copy Constructor
    {
        x = c.x;
        y = c.y;
    }
    int area(void); //Function decleration inside the class
};

int check::area(void) //Function Definition outside the class
{
    return (x * y);
}

int main()
{
    check c1, c2(5, 6), c3;
    int x, y;
    cout << "Enter two number>>" << endl;
    cin >> x >> y;
    c3 = c2;
    c1.set_data(x, y);
    check c4 = c1;
    c1.show_data();
    c2.show_data();
    c3.show_data();
    c4.show_data();
    return 0;
}
