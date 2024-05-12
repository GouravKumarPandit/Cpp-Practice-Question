#include <iostream>
#include <string.h>
using namespace std;

class stri
{
    char str1[40], str2[30];

public:
    void set_data()
    {
        cout << "Enter your first name" << endl;
        gets(str1);
        cout << "Enter your last name" << endl;
        gets(str2);
    }

    void show_data()
    {
        cout<<strncat(str1, str2, (sizeof(str1) - strlen(str1) - 1))<<endl;
    }
};

int main()
{
    stri s;
    s.set_data();
    s.show_data();
    return 0;
}