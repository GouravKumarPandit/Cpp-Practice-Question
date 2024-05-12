#include <iostream>
using namespace std;

class complex
{
    int x, y;

public:
    complex(int a, int b)  //Constructor Definition
    {
        x = a;
        y = b;
    }
    void show_data()
    {
        cout << x << " " << y << endl;
    }
    friend int sum(complex);   //friend function decleration
};
int sum(complex c)    //Friend function definition
{
    int temp;
    temp = c.x + c.y;
    return temp;
}
int main()
{
    complex c1(4, 5);
    c1.show_data();
    int X = sum(c1);  //Calling friend function
    cout << X << endl;
    return 0;
}