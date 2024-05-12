#include <iostream>
#include <stdlib.h>
using namespace std;

struct student
{
    char name[30];
    int roll_no, age;
};

void input(student *);
void display(student *);

void input(student *stu)
{
    int i;
    for (i = 0; i < 3; i++)
    {
        cout << "Enter Student " << i + 1 << " Imformation>>" << endl;
        cout << "Name>>" << endl;
        gets((stu + i)->name);
        cout << "Roll_no>>" << endl;
        cin >> (stu + i)->roll_no;
        cout << "Age>>" << endl;
        cin >> (stu + i)->age;
        fflush(stdin);
    }
}

void display(student *stu)
{
    int i;
    cout << "Student information>>" << endl;
    for (i = 0; i < 3; i++)
    {
        cout << "Student " << i + 1 << " >>" << endl;
        cout << "Name>>" << (stu + i)->name << endl
             << "Roll_no>>" << (stu + i)->roll_no << endl
             << "Age>>" << (stu + i)->age;
        cout << endl;
    }
}

int main()
{
    student stu[1];
    input(stu);
    cout << endl;
    display(stu);
    return 0;
}