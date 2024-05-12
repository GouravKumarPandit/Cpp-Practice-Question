#include <iostream>
using namespace std;

class check
{
    int x, y;

public:
    check(int a=10,int b=20)
    {
        x=a;
        y=b;
    }
    /*check(int b,int c)
        {
            x=b;
            y=c;
        }*/
    void show_data()
    {
        cout << "X>>" << x << " Y>>" << y << endl;
    }
};

int main()
{
    check(),(4,5);
    check().show_data();
    check(4,5).show_data();   //Default contructor
    
    return 0;
}