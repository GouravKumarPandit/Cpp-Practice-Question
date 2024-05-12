#include <iostream>
using namespace std;
void set_data(void);
void show_data(void);

class student
{
    char name[30];
    int age;

public:
    void set_data()
    {
        cout << "Enter student name>>" << endl;
        gets(name);
        cout << "Enter student age>>" << endl;
        cin >> age;
    }

    void show_data()
    {
        cout << "Student name>>" << name << endl;
        cout << "Student age>>" << age << endl;
    }
};

int main()
{
    student stu;
    stu.set_data();
    stu.show_data();
    return 0;
}