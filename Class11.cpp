#include <iostream>
#include <math.h>
using namespace std;

class armstrong
{
    int num, count = 0, r=0, temp=0, sum = 0;

public:
    void set_data(int i)
    {
        cout << "Enter " <<i+1 <<" number>>" << endl;
        cin >> num;
    }
    void check_arm()
    {
        temp = num;
        while (temp > 0)
        {
            count += 1;
            temp /= 10;
        }
        temp = num;
        while (temp > 0)
        {
            r = temp % 10;
            sum += pow(r, count);
            temp /= 10;
        }
    }
    void check(void);
};

void armstrong ::check(void)
{
    if (sum == num)
        cout << num << " ARE ARMSTRONG NUMBER." << endl;
    else
        cout << num << " ARE NOT ARMSTRONG NUMBER." << endl;
}

int main()
{
    int i;
    armstrong arm[5];
    for (i = 0; i < 5; i++)
    {
        arm[i].set_data(i);
        arm[i].check_arm();
    }
    cout<<endl;
    cout<<"It's Time To Check Given Number Is ARMSTRONG OR NOT??"<<endl;
    for (i = 0; i < 5; i++)
    {
        arm[i].check();
    }
    return 0;
}
