#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter two number>>" << endl;
    cin >> a >> b;
    if (a > b)
        goto incre;
    else
        goto decre;

decre:
    b--;
    cout << b << endl;

incre:
    a++;
    cout << a << endl;
    return 0;
}