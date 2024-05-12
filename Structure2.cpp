#include <iostream>
#include<stdio.h>
using namespace std;

struct student
{
    char name[30];
    int id, age;
    float weight;
};

int main()
{
    student s1;
    cout << "Enter student name,roll no,age and weight>>" << endl;
    gets(s1.name);
    cin >> (s1.id) >> (s1.age) >> (s1.weight);
    cout << "Studnet name>>" << endl;
    cout << "Name>>" << (s1.name) << endl
         << "Roll_no>>" << (s1.id) << endl
         << "Age>>" << (s1.age) << endl
         << "Weight>>" << (s1.weight);
    return 0;
}