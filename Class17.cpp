#include<iostream>
using namespace std;

class addition
{
    int a, b;
    

public:
    void set_data(void);
    void show_data(void)
    {
        cout << a <<" , " << b << endl;
    }
    addition add(addition c);
}c4;

inline void addition::set_data(void)
{
    cout << "Enter two number>>" << endl;
    cin >> a >> b;
}

inline addition addition::add(addition c)
{
    addition temp;
    temp.a = a + c.a;
    temp.b = b + c.b;
    return temp;
}

void mfunc(addition temp)
{
    temp.show_data();
}

int main()
{
    addition c1, c2, c3;
    c1.set_data();
    c1.show_data();

    c2.set_data();
    c2.show_data();

    /*c4.set_data();    This is global variable decleration
    c4.show_data();        and it is visible for all the programme*/

    c3 = c1.add(c2);
    cout<<endl;
    c3.show_data();
    cout<<"Using normal fuction>>"<<endl;
    mfunc(c3);

    return 0;
}
