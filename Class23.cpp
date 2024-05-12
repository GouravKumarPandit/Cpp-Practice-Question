#include <iostream>
using namespace std;

class practice
{
public:
    static int a;

    static void set_data()
    {
        cout << "Enter a number>>" << endl;
        cin >> a;
    }
    static void show_data()
    {
        cout << a << endl;
    }
};

int practice::a;

int main()
{
    practice::a = 27;
    practice::show_data();
    /*practice::set_data();
    practice::show_data();*/
    /*p.set_data();
    p.show_data();*/
    return 0;
}