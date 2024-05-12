#include <iostream>
using namespace std;

class counter
{
    static int count;
public:
    counter()
    {
        count = 0;
    }
    static void inc_count()
    {
        count++;
    }
    static int show_data()
    {
        return count;
    }
};
int counter::count;

int main()
{
    counter c1, c2;
    cout << c1.show_data() << endl;
    c1.inc_count();
    cout << c2.show_data() << endl;
    c2.inc_count();
    cout << c1.show_data() << endl;
    cout << c2.show_data() << endl;

    return 0;
}