#include<iostream>
using namespace std;

struct adrress
{
    char city[30];
    int road_no;
};

struct student
{
    adrress add;
    char name[30];
    int roll_no;
};

int main()
{
    student stu;
    cout << "Enter the student name>>" << endl;
    gets(stu.name);
    cout << "Enter the student roll_no>>" << endl;
    cin >> stu.roll_no;
    fflush(stdin);
    cout << "Enter the student adrress>>" << endl;
    gets(stu.add.city);
    cout << "Enter the student road_no>>" << endl;
    cin >> stu.add.road_no;
    cout << endl;
    cout << "student name>>" << stu.name << endl;
    cout << "student roll_no>>" << stu.roll_no << endl;
    cout << "student adrress>>" << stu.add.city << endl;
    cout << "student road no>>" << stu.add.road_no << endl;
    return 0;
}