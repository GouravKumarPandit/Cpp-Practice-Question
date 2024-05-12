#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;

int main()
{
    char ch;
    cout << "Enter a character>>" << endl;
    ch = getch();
    cout << "Your enter chracter is>>" << ch << endl;

    cout << "Enter a character>>" << endl;
    ch = getche();
    cout << "Your enter chracter is>>" << ch << endl;

    cout << "Enter a character>>" << endl;
    ch = getchar();
    cout << "Your enter chracter is>>" << ch << endl;

    return 0;
}