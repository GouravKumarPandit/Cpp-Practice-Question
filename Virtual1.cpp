#include <iostream>
using namespace std;

class person
{
protected:
    char Name[30], Address[20];
    int age;

public:
    virtual void set_data()     //it is called virtual function, method overiding
    {
        cout << "Enter Name and Address>>" << endl;
        gets(Name);
        gets(Address);
        cout << "Enter your age>>" << endl;
        cin >> age;
    }
    virtual void show_data()
    {
        cout << "Name>>" << Name << endl
             << "Adrress>>" << Address << endl
             << "Age>>" << age << endl;
    }
};

class student : public person
{
protected:
    int Roll_no, Mmarks, Cmarks, Pmarks;

public:
    void set_data()
    {
        person::set_data();
        cout << "Enter student Roll number>>" << endl;
        cin >> Roll_no;
        cout << "Enter Student Maths,Physics and chemistry marks>>" << endl;
        cin >> Mmarks >> Pmarks >> Cmarks;
        fflush(stdin);
    }
    void show_data()
    {
        person::show_data();
        cout << "Roll number>>" << Roll_no << endl
             << "Math marks>>" << Mmarks << endl
             << "Physics marks>>" << Pmarks << endl
             << "Chemistry marks>>" << Cmarks << endl;
    }
};

class result : public student
{
    int total;
    float per;

public:
    void set_data()
    {
        student::set_data();
        total = Mmarks + Pmarks + Cmarks;
        per = total / 3;
    }
    void show_data()
    {
        student::show_data();
        cout << "Total marks>>" << total << endl
             << "Percentage>>" << per << endl;
    }
};

int main()
{
    person *ptr;    //Creating parent class pointer
    //ptr = new result[3];
    result s1;
    ptr=&s1;     //Storing adress of child class object in parent class ponter and it is totally leagal
    //ptr->set_data();   //early binding compiler saw type of a pointer not the content of the pointer
    //ptr->show_data();
    ptr->set_data();
    ptr->show_data();
    /*for (int i = 0; i < 3; i++)
    {
        (ptr + i)->set_data();
    }
    for (int i = 0; i < 3; i++)
    {
        (ptr + i)->show_data();
    }*/
    return 0;
}