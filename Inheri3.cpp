#include <iostream>
using namespace std;

class human
{
protected:
    char name[30], add[20];
    int clg_id;
    short age;

public:
    void set_data()
    {
        cout << "Enter name and address>>" << endl;
        gets(name);
        gets(add);
        cout << "Enter college id and age>>" << endl;
        cin >> clg_id >> age;
    }
    void show_data()
    {
        cout << "Name>>" << name << endl
             << "Address>>" << add << endl
             << "College Id>>" << clg_id << endl
             << "Age>>" << age << endl;
    }
};

class student : public human
{
protected:
    short Mmarks, Pmarks, Cmarks;

public:
    void set_data()
    {
        human::set_data(); //Solving ambigous problem to tell the compiler that set_data from human class
        cout << "Enter math,physics and chemistry>>" << endl;
        cin >> Mmarks >> Pmarks >> Cmarks;
        fflush(stdin);
    }
    void show_data()
    {
        human::show_data();
        cout << "Maths Marks>>" << Mmarks << endl
             << "Physics Marks>>" << Pmarks << endl
             << "Chemistry Marks>>" << Cmarks << endl;
    }
};

class result : public student
{
protected:
    short total;
    short per;

public:
    void show_data()
    {
        set_data();
        student::show_data();
        total = Mmarks + Pmarks + Cmarks;
        per = total / 3;
        cout << "Total Markas>>" << total << endl;
        cout << "Percentage>>" << per << endl;
    }
    void res()
    {
        if (per > 35 && per <= 45)
            cout << "You are just pass!!" << endl;
        else if (per > 45 && per <= 60)
            cout << "You are 2nd Devision!!" << endl;
        else if (per > 60 && per <= 80)
            cout << "You are 1st Division!!" << endl;
        else
            cout << "You are 1st division and you get schlorship!!" << endl;
    }
};

int main()
{
    result stu1, stu2, stu3;
    stu1.show_data();
    stu1.res();
    cout<<endl;

    stu2.show_data();
    stu2.res();
    cout<<endl;

    stu3.show_data();
    stu3.res();
    return 0;
}