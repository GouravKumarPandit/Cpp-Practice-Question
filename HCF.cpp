#include <iostream>
using namespace std;

int main()
{
    int num1, num2, num3, i;
    cout << "Enter two number>>" << endl;
    cin >> num1 >> num2;
    num3 = (num1 > num2) ? num1 : num2;
    int HCF, LCM;
    for (i = num3; i >= 1; i--)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            HCF = i;
            break;
        }
    }
    cout << "HCF is>>" << HCF << endl;
    LCM = (num1 * num2) / HCF;
    cout << "LCM is>>" << LCM << endl;
    return 0;
}