#include <iostream>
using namespace std;

void func(void)
{
    class check
    {
        int x;

    public:
        void set_data(void)
        {
            cout << "Enter a number>>" << endl;
            cin >> x;
        }
        void show_data(void)
        {
            cout << "The value is " << x << endl;
        }
    };

    check c;
    c.set_data();
    c.show_data();
}

int main()
{
    func();
    return 0;
}