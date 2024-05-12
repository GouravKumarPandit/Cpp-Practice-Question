#include <iostream>
#define MAX 100
using namespace std;

// >> Magic numner
/* >> sum of every number
   >> reverse of that number
   >> sum*reverse==original number
  */

class magic
{
    int num1, num2, r, rev, sum = 0, temp, chec;

public:
    void set_data(int i)
    {
        cout << "Enter " << i + 1 << " number>>" << endl;
        cin >> num1;
        temp = num1;
        while (temp > 0)
        {
            r = temp % 10;
            sum += r;
            temp = temp / 10;
        }
        num2 = sum;
        while (num2 > 0)
        {
            r = num2 % 10;
            rev = rev * 10 + r;
            num2 = num2 / 10;
        }
        chec = rev * sum;
    }
    void check_data(void);
};

inline void magic:: check_data(void)
{
    if (chec == num1)
        cout << "Number " << num1 << " is Magic Number." << endl;
    else
        cout<< "Number " << num1 << " is Not Magic Number." << endl;
}

int main()
{
    int n,i;
    cout << "Enter the size of array>>" << endl;
    cin >> n;
    if (n > 100)
    {
        cout << "Enter size should be smaller than " << MAX << " ." << endl;
        exit(0);
    }
    magic mag[MAX];
    for (i = 0; i < n; i++)
    {
        mag[i].set_data(i);
    }
    for (i = 0; i < n; i++)
    {
        mag[i].check_data();
    }
    return 0;
}