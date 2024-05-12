#include <iostream>
using namespace std;
/*
Multivalued Inheritence:
1. cacu1 
2. calcu
3. Option = calcu1 + calcu2
*/

class calcu1
{
protected:
    int num1, num2;

public:
    calcu1()
    {
        cout << "Enter two number for simple mathmatics calculation>>" << endl;
        cin >> num1 >> num2;
    }
    void show_data()
    {
        cout << "Your two numbers are>>" << num1 << " , " << num2 << endl;
    }
    void Addcalc()
    {
        cout << "Sum>>" << num1 + num2 << endl;
    }
    void Subcalc()
    {
        cout << "Subtraction>>" << num1 - num2 << endl;
    }
    void Multicalc()
    {
        cout << "Multiplication>>" << num1 * num2 << endl;
    }
    void Divcalc()
    {
        cout << "Division>>" << num1 / num2 << endl;
    }
};

class calcu2
{
protected:
    int num3, num4;

public:
    calcu2() 
    {
        cout << "Enter two number for advanced mathmatics calculation>>" << endl;
        cin >> num3 >> num4;
    }
    void show_data()
    {
        cout << "Your two numbers are>>" << num3 << " , " << num4 << endl;
    }
    void noteqcalc()
    {
        cout << "Equal Or Not>>" << (num3 != num4) << endl;
    }
    void eqcalc()
    {
        cout << "Equal Or Not>>" << (num3 == num4) << endl;
    }
    void Addeqcalc()
    {
        cout << "ADDTION>>" << (num3 += num4) << endl;
    }
    void Subeqcalc()
    {
        cout << "SUBTRACTION>>" << (num3 -= num4) << endl;
    }
};

class Option : public calcu1, public calcu2     
{
    int ch;

public:
    Option() //: calcu2() : calcu1()
    {  }
    void choice()
    {
        while (1)
        {
            cout << "Enter your choice >> 1.'+' 2.'-' 3.'*' 4.'/' 5.'!=' 6.'==' 7.'+=' 8.'*=' 9.'EXIT'>>" << endl;
            cin >> ch;
            switch (ch)
            {
            case 1:
                Addcalc();
                break;
            case 2:
                Subcalc();
                break;
            case 3:
                Multicalc();
                break;
            case 4:
                Divcalc();
                break;
            case 5:
                noteqcalc();
                break;
            case 6:
                eqcalc();
                break;
            case 7:
                Addeqcalc();
                break;
            case 8:
                Subeqcalc();
                break;
            case 9:
                exit(0);
            }
        }
    }
    void show_data()
    {
        calcu1::show_data();
        calcu2::show_data();
    }
};

int main()
{
    Option op;
    op.show_data();
    op.choice();
    return 0;
}