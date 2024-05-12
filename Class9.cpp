#include <iostream>
using namespace std;

class calculation
{
    int l, b;

public:
    inline void set_data(int a, int c)
    {
        l = a;
        b = c;
    }
    inline void show_data(int a, int c)
    {
        cout << "Length and Breath are>>" << l << " , " << b << endl;
    }
    inline int area(void)
    {
        return (l * b);
    }
};

int main()
{
    calculation rec;
    int a,b;
    cout<<"Enter the rectangle length and breath>>"<<endl;
    cin>>a>>b;
    rec.set_data(a,b);
    rec.show_data(a,b);
    cout << "AREA>>" << rec.area();
    return 0;
}