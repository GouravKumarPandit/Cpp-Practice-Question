#include <iostream>
using namespace std;
/* 
Hierarchical Inheritence
1. people
2. student --> people
3. teacher --> people
*/

class people
{
protected:
    char name[30], add[20];
    int age, clg_id;

public:
    void set_data(int x, int y)
    {
        cout << "Enter name and address>>" << endl;
        gets(name);
        gets(add);
        age = x;
        clg_id = y;
        fflush(stdin);
    }
    void show_data()
    {
        cout << "Name>>" << name << endl
             << "Address>>" << add << endl
             << "Age>>" << age << endl
             << "College Id>>" << clg_id << endl;
    }
};

class student: public people{
    protected:
        int Mmarks,Pmarks,Cmarks;
        int roll_no;
    public:
        void set_data(int r,int x,int y){
            people::set_data(x,y);
            cout<<"Enter math, chemistry and physics marks>>"<<endl;
            cin>>Mmarks>>Pmarks>>Cmarks;
            roll_no=r;
            fflush(stdin);
        }
        void show_data(){
            people::show_data();
            cout<<"Math Marks>>"<<Mmarks<<"Physics Marks>>"<<Pmarks<<"Chemistry Marks>>"<<Cmarks<<endl;
        }
};

class teacher : public people{
    protected:
        int salary;
        char t_sub[20];
    public:
        void set_data(int s,int x,int y){
            people::set_data(x,y);
            salary=s;
            cout<<"Enter teacher teach subject>>"<<endl;
            gets(t_sub);
            fflush(stdin);
        }
        void show_data(){
            people::show_data();
            cout<<"Salary>>"<<salary<<endl<<"Teach Subject>>"<<t_sub<<endl;
        }
};

int main(){
    student s1;
    s1.set_data(12345,21,200604);
    s1.show_data();
    teacher t1;
    t1.set_data(25000,35,200606);
    t1.show_data();
    return 0;
}