#include <iostream>
using namespace std;

int main()
{
    int a, b, c, big;
    cout << "Enter three number>>" << endl;
    cin >> a >> b >> c;
    big = ((a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c));
    cout << "Big number is>>" << big << endl;
    return 0;
}