#include <iostream>
#include <stdio.h>
#define MAX 100
using namespace std;

struct student
{
    char name[30];
    int roll_no, age;
    float weight;
};

int main()
{
    student stu[MAX];
    int n, i;
    cout << "Enter the number of student>>" << endl;
    cin >> n;
    if (n > MAX)
    {
        cout << "Given size should be smaller than" << MAX << ".";
        exit(0);
    }
    fflush(stdin);
    for (i = 0; i < n; i++)
    {
        cout << "Enter student " << i + 1 << " name>>" << endl;
        gets(stu[i].name);
        cout << "Enter student " << i + 1 << " Roll_No>>" << endl;
        cin >> stu[i].roll_no;
        cout << "Enter student " << i + 1 << " Age>>" << endl;
        cin >> stu[i].age;
        cout << "Enter student " << i + 1 << " Weight>>" << endl;
        cin >> stu[i].weight;
        fflush(stdin);
        cout << endl;
    }

    cout << endl;
    cout << "After taking student information>>" << endl;
    for (i = 0; i < n; i++)
    {
        cout << "Student " << i + 1 << " name>>" << stu[i].name << endl;
        cout << "Student " << i + 1 << " Roll_no>>" << stu[i].roll_no << endl;
        cout << "Student " << i + 1 << " Age>>" << stu[i].age << endl;
        cout << "Student " << i + 1 << " Weight>>" << stu[i].weight << endl;
        cout << endl;
    }
    return 0;
}