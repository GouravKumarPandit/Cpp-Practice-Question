#include <iostream>
using namespace std;

class away
{
    int x, y;

public:
    away() : x(0), y(0)
    {
    }
    away(int a, int b) : x(a), y(b)
    {
    }
    void show_data(void)
    {
        cout << x << " " << y << endl;
    }
    void set_data()
    {
        cout<<"Enter two number>>"<<endl;
        cin>>x>>y;
    }
};

int main()
{
    away a1, a2 = away(10, 20), a3;
    a3.show_data();
    a3.set_data();
    a1.show_data();
    a2.show_data();
    a3.show_data();

    return 0;
}