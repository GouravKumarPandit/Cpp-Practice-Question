#include <iostream>
using namespace std;

class check
{
    int a, b;

public:
    void set_data(void)
    {
        cout << "Enter two number to find Maximum between them>>" << endl;
        cin >> a >> b;
    }
    void max_min(void)
    {
        cout << "BIG NUMBER>>"<<((a > b) ? a : b);
    }
};

int main()
{
    check A;
    A.set_data();
    A.max_min();
    return 0;
}