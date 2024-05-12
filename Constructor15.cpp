#include <iostream>
using namespace std;

class revision
{
    int x, y, z;

public:
    revision() //Default Constructor
    {
        x = 0;
        y = 0;
        z = 0;
    }
    revision(int a, int b) : x(a), y(b) //Define Constructor in another way
    {
    }
    revision(int a, int d, int e); //Decleration inside the Class
    void show_data()
    {
        cout << "REVISION>>" << x << " , " << y << " , " << z << endl;
    }
    revision(revision &c) //Define Copy constructor
    {
        x = c.x;
        y = c.y;
        z = c.z;
    }
};
revision::revision(int c, int d, int e) //Define outside the Class
{
    x = c;
    y = d;
    z = e;
}

int main()
{
    revision r1, r2(10, 20), r3(4, 5, 6); //Implicit
    revision r4(r3);                      //Copy Constructor
    r1.show_data();
    r2.show_data();
    r3.show_data();
    r4.show_data();
    return 0;
}