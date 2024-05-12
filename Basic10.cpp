#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  int n, b;
  bool a;
  short c;
  float f;
  double d;
  long l;
  cout << "Enter two number>>";
  cin >> n >> b;

  cout << "Enter number n==10 >> " << (n == 10) << endl;
  cout << "Enter number n<=10 >> " << (n <= 10) << endl;
  cout << "Enter number n=>10 >> " << (n >= 10) << endl;
  cout << "Enter number n!=10 >> " << (n != 10) << endl;
  cout << "Enter number n>10 >> " << (n > 10) << endl;
  cout << "Enter number n<10 >> " << (n < 10) << endl;

  cout << "Enter number (n<=10 && b>=20) >> " << (n <= 10 && b >= 20) << endl;
  cout << "Enter number (n>=10 || b<=20) >> " << (n >= 10 || b <= 20) << endl;
  cout << "Enter number (n==10 && b!=20) >> " << (n == 10 && b != 20) << endl;
  cout << "Enter number (n!=10 || b>=20) >> " << (n != 10 || b >= 20) << endl;

  if (!(n == 10))
    cout << "You are in if." << endl;
  else
    cout << "You are in else." << endl;

  cout << "After bitwise & operation>>" << (n & b) << endl;
  cout << "After bitwise | operation>>" << (n | b) << endl;
  cout << "After bitwise ^ operation>>" << (n ^ b) << endl;
  cout << "After bitwise ~ operation>>" << (~n) << endl;

  cout << "After assingment + operator>>" << (n += b) << endl;
  cout << "After assingment - operator>>" << (n -= b) << endl;
  cout << "After assingment * operator>>" << (n *= b) << endl;
  cout << "After assingment / operator>>" << (n /= b) << endl;

  cout << "The size of int>>" << setw(5) << sizeof(n) << endl;
  cout << "The size of bool>>" << setw(5) << sizeof(a) << endl;
  cout << "The size of short>>" << setw(5) << sizeof(c) << endl;
  cout << "The size of float>>" << setw(5) << sizeof(f) << endl;
  cout << "The size of double>>" << setw(5) << sizeof(d) << endl;
  cout << "The size of long>>" << setw(5) << sizeof(l) << endl;

  int y, m, w, day, rd;
  cout << "Enter total days>>" << endl;
  cin >> day;
  y = day / 365;
  m = y * 12;
  w = day / 7;
  rd = day % 365;
  cout << "Year=" << y << " Month=" << m << " Week=" << w << " Remaining Days=" << rd << endl;

  int ter;
  ter = (n > b) ? n : b;
  cout << "After Ternary Operation>>" << ter << endl;

  float num1, num2, sum;
  cout << "Enter two number>>";
  cin >> num1 >> num2;
  sum = num1 + num2;
  cout << "Sum=" << (int)sum << endl;

  return 0;
}