#include <iostream>
using namespace std;

class print
{
public:
    void name(void);
};

void print ::name(void)
{
    cout << "GOURAV KUMAR PANDIT!!" << endl;
}

int main()
{
    print p;
    p.name();
    return 0;
}