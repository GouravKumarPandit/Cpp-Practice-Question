#include <iostream>
#define PI 3.14
using namespace std;
void set_data(void);
void show_data(void);
float result(void);

class area
{
    int rad;

public:
    void set_data(void)
    {
        cout << "ENter the radius>>" << endl;
        cin >> rad;
    }
    void show_data(void)
    {
        cout << "Radius is>>" << rad << endl;
    }
    float result(void)
    {
        float res;
        res = (PI * rad * rad);
        return res;
    }
};

int main()
{
    area A;
    float res;
    A.set_data();
    A.show_data();
    res = A.result();
    cout << "Area is>>" << res << endl;
    return 0;
}