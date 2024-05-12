#include <iostream>
using namespace std;

int main()
{
    int num, i;
    cout << "Enter a number to check it is prime or not>>" << endl;
    cin >> num;
    int count = 0;
    for (i = 1; i <= num; i++)
    {
        if (num % i == 0)
            count += 1;
    }
    if (count == 2)
        cout << "Enter number is Prime number." << endl;
    else
        cout << "Enter number is not Prime number." << endl;
    return 0;
}