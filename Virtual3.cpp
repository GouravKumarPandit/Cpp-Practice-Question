#include <iostream>
using namespace std;

class Human
{
protected:
    string Name;

public:
    Human(string name)
    {
        Name = name;
    }
    virtual void show_data() = 0; 
    /* Do noting function ---> Creating pure virtual function and when we create pure virtual function the class automatically
    become the abstract class and we can't create object of that class and we must-must need to override that virtual function*/
};

class Student : public Human
{
protected:
    int Math;

public:
    Student(string Name, int math) : Human(Name)
    {
        Math = math;
    }
    void show_data()
    {
        cout << "Name>>" << Name << endl;
        cout << "Marks>>" << Math << endl;
    }
};

int main()
{
    Human *ptr;
    string Name = "Ashwani";
    Student S(Name, 100);
    ptr = &S;
    ptr->show_data();
    return 0;
}