#include <iostream>
using namespace std;

class Dynamic
{
    int x, y;

public:
    void set_data(int x, int y)
    {
        this->x = x;
        this->y = y;
    }
    void show_data(void)
    {
        cout << x << " " << y << endl;
    }
};

int main()
{
    Dynamic *ptr;
    int size, a, b, i;
    cout << "Enter the size>>" << endl;
    cin >> size;
    ptr = new Dynamic[size];     //Creating Dynamically memory
    cout << "Enter " << size << " number >>" << endl;
    for (i = 0; i < size; i++)
    {
        cout << "Enter two number>>" << endl;
        cin >> a >> b;
        (ptr + i)->set_data(a, b);     //Object to member
    }
    for (i = 0; i < size; i++)
    {
        (ptr + i)->show_data();
    }
    delete[] ptr;    //Using delete keyword
    return 0;
}