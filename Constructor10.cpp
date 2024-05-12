#include <iostream>
using namespace std;

class explic
{
    int x, y;

public:
    explic(int, int);
    void show_data()
    {
        cout << x << " " << y << endl;
    }
    int area(void)
    {
        return (x * y);
    }
};

explic::explic(int a, int b)
{
    x = a;
    y = b;
}

int main()
{
    explic ex1 = explic(10, 20), ex2 = explic(30, 40); //EXPLICIT Call Constructor
    explic ex3(50, 60);                                //IMPLICIT Call Constructor
    explic(70, 80);                                    //Creat Object without thier name

    ex1.show_data();
    ex2.show_data();
    ex3.show_data();
    explic(70, 80).show_data();

    cout << "Area>>" << ex1.area() << endl;
    cout << "Area>>" << ex2.area() << endl;
    cout << "Area>>" << ex3.area() << endl;
    cout << "Area>>" << explic(70, 80).area() << endl;

    return 0;
}