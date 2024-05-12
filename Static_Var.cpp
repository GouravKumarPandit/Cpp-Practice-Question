#include <iostream>
using namespace std;

class check
{
    static int x; //Decleration Of Static Variable
public:           //Access Modifier
    static void set_data(int a)  //Function Definition
    {
        x = a;
    }
    static void show_data()
    {
        cout << x << endl;
    }
};
int check::x;  //Static Variable Definition
int main()
{
    check::set_data(10);  //Initialize value without creating object through there class name
    check::show_data();   
    return 0;
}