#include <iostream>
using namespace std;

class palindrome
{
    int num, rev = 0, temp, r;

public:
    void set_data(int a)
    {
        cout << "Enter " << a + 1 << " number>>" << endl;
        cin >> num;
    }

    void check_palin(void)
    {
        temp = num;
        while (temp > 0)
        {
            r = temp % 10;
            rev = rev * 10 + r;
            temp /= 10;
        }
    }

    void check(void);
};

void palindrome ::check(void)
{
    if (rev == num)
        cout << num << "Are Palindrome Number." << endl;
    else
        cout << num << "Are not Palindrome Number." << endl;
}

int main()
{
    palindrome pal[5];
    int i;
    for(i=0;i<5;i++)
    {
        pal[i].set_data(i);
        pal[i].check_palin();
    }
    cout<<endl;
    cout<<"It's Time To Check Given Number Is PALINDROME OR NOT??"<<endl;
    cout<<endl;
    for(i=0;i<5;i++)
    {
        pal[i].check();
    }
    return 0;
}