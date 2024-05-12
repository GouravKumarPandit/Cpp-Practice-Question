#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int r, num, num1, sum = 0, count = 0;
    cout << "Enter a number to check it is Armstrong or not>>" << endl;
    cin >> num;
    num1 = num;
    while (num1 > 0)
    {
        count += 1;
        num1 = num1 / 10;
    }
    num1 = num;
    while (num1 > 0)
    {
        r = num1 % 10;
        sum += pow(r, count);
        num1 = num1 / 10;
    }
    if (sum == num)
        cout << "Given number is Armstrong number." << endl;
    else
        cout << "Given number is not Armstrong number." << endl;
    return 0;
}