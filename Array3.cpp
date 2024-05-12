#include <iostream>
using namespace std;

int main()
{
    int a[5], i, sum = 0;
    cout << "Enter 5 number>>" << endl;
    for (i = 0; i < 5; i++)
    {
        cin >> a[i];
    }
    cout << "Your number are>>" << endl;
    for (i = 0; i < 5; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl
         << "After the sum of each number>>" << endl;
    for (i = 0; i < 5; i++)
    {
        if (i < 4)
        {
            cout << a[i] << " + ";
            sum += a[i];
        }
        else
        {
            sum += a[i];
            cout << a[i] << " = " << sum << endl;
        }
    }
    return 0;
}