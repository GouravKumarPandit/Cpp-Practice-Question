#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    void set_data(void)
    {
        cout << "Enter two number>>" << endl;
        cin >> a >> b;
    }

    inline void show_data(void);
    inline complex add(complex);

    void res_show(void)
    {
        cout <<"SUM a=" << a << " b=" << b;
    }
};

void complex ::show_data(void)
{
    cout << "Your enter number are>>" << a <<" , " << b << endl;
}

complex complex ::add(complex c)
{
    complex temp;
    temp.a = a + c.a;
    temp.b = b + c.b;
    return temp;
}

int main()
{
    complex c1, c2, c3;
    c1.set_data();
    c1.show_data();
    cout<<endl;
    c2.set_data();
    c2.show_data();
    cout<<endl;
    c3 = c1.add(c2);
    c3.res_show();
    return 0;
}