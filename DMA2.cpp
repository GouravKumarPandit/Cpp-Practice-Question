#include <iostream>
using namespace std;

class Dyanamic
{
    int x, y;

public:
    void set_data(int x, int y)
    {
        this->x = x; //this pointer calling Explicit
        this->y = y;
    }
    void show_data()
    {
        cout << x << " " << y << endl;
    }
};

int main()
{
    Dyanamic *ptr;  //Memory declaration
    int size, i, a, b;
    cout << "Enter the size>>" << endl;
    cin >> size;
    ptr = new Dyanamic[size]; //Creating Dynamically object
    for (i = 0; i < size; i++)
    {
        cout << "Enter two number>>" << endl;
        cin >> a >> b;
        (ptr + i)->set_data(a, b); // -> Object to member
    }
    for (i = 0; i < size; i++)
    {
        (ptr + i)->show_data();
    }
    delete [] ptr;   //We should delete the dynamically allocatoe memory because it take place in heap segment and it will not delete
                     //automatically.
    return 0;
}