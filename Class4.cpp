#include <iostream>
#include <string.h>
using namespace std;

class string_fun
{
    char name[30];

public:
    void mix(char a[], char b[])
    {
        strcat(a, b);
        strcpy(name, a);
    }
    void display(void)
    {
        cout << "Your Name>>" << name;
    }
};

int main()
{
    string_fun call;
    char a[30], b[30], c[30];
    cout << "Enter your first name>>" << endl;
    gets(a);
    cout << "Enter last name>>" << endl;
    gets(b);
    call.mix(a, b);
    call.display();
    return 0;
}