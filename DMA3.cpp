#include <iostream>
using namespace std;

class Dyanamic
{
    int x, y;

public:
    Dyanamic& set_data(int x, int y)      //Accepting reference
    {
        this->x = x;
        this->y = y;
        return *this;     //Returning object, through this pointer
    }
    void show_data()
    {
        cout << x << " " << y << endl;
    }
};

int main()
{
    Dyanamic *ptr;
    ptr = new Dyanamic;
    ptr->set_data(10, 20).show_data();
    //ptr->show_data();
    delete ptr;
    return 0;
}