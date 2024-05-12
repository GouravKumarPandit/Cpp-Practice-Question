#include <iostream>
using namespace std;

class number
{
    int x, y;

public:
    void setData()
    {
        cout << "Enter two number>>" << endl;
        cin >> x >> y;
    }
    void showData()
    {
        cout << x << " " << y << endl;
    }
    friend class calculator;
};
class solveNumber
{
    int x;

public:
    void showData()
    {
        cout << x << " " << endl;
    }
    friend class calculator;
};
class calculator
{
public:
    void sum(number num1)
    {
        solveNumber add1;
        add1.x = num1.x + num1.y;
        add1.showData();
    }
    void sub(number num2)
    {
        solveNumber sub2;
        sub2.x = num2.x - num2.y;
        sub2.showData();
    }
    void multi(number num3)
    {
        solveNumber multi3;
        multi3.x = num3.x * num3.y;
        multi3.showData();
    }
    void div(number num4)
    {
        solveNumber div4;
        div4.x = num4.x / num4.y;
        div4.showData();
    }
};

int main()
{
    number num1;
    num1.setData();
    num1.showData();
    calculator cal;
    cal.sum(num1);
    cal.sub(num1);
    cal.multi(num1);
    cal.div(num1);
    return 0;
}