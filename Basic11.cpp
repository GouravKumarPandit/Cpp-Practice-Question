#include <iostream>
using namespace std;

int main()
{
   int a, b, c;
   cout << "Enter three number>>" << endl;
   cin >> a >> b >> c;
   if (a > b)
   {
      if (a > c)
         cout << "a is greater among them." << a << endl;
      else
         cout << "c is greteer amog them." << c << endl;
   }
   else if (b > c)
      cout << "b is greater among them." << b << endl;
   else
      cout << "c is greater among them." << c << endl;

   int year;
   cout << "Enter the year>>" << endl;
   cin >> year;
   if (year % 4 == 0)
      cout << "This Year Is Leep Year!!" << endl;
   else
      cout << "This Is Not Leep Year!!" << endl;
   return 0;
}