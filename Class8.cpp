#include <iostream>
using namespace std;

class calculation
{
    int l, b, h;

public:
    inline void set_data(void);
    inline void show_data(void);
    inline int area(void);
};

void calculation ::set_data(void)
{
    cout << "Enter cuboid length,width and height>>" << endl;
    cin >> l >> b >> h;
}

void calculation ::show_data()
{
    cout << "Enter cuboid length,width and height are>>" << l <<" "<< b <<" "<< h << endl;
}

int calculation ::area(void)
{
    int ar;
    ar = l * b * h;
    return ar;
}

int main()
{
    calculation rec;
    int ar;
    rec.set_data();
    rec.show_data();
    ar = rec.area();
    cout<<"Area>>"<<ar;
    return 0;
}