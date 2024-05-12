#include <iostream>
using namespace std;

struct add
{
    int a, b;
};

int main()
{
    add s1, s2, s3;
    cout << "Enter first number>>" << endl;
    cin >> s1.a >> s1.b;
    cout << endl;
    cout << "Enter second number>>" << endl;
    cin >> s2.a >> s2.b;
    cout << endl;
    s3.a = s1.a + s2.a;
    s3.b = s1.b + s2.b;
    cout << "After sum>>" << endl;
    cout << s3.a << endl
         << s3.b;
    return 0;
}