#include<iostream>
using namespace std;

class Human{
    protected:
        string Name;
        int Age;
    public:
        Human(string name,int age):Name(name),Age(age){}
        virtual void show_data(){}  //Creating virtual function
};

class Student:public Human{
    protected:
        float Mmarks,Pmarks,Cmarks;
        int Roll_no;
    public:
        Student(string name,int age,int math,int phy,int chem):Human(name,age){
            Mmarks=math;
            Pmarks=phy;
            Cmarks=chem;
        }
        void show_data(){
            Human::show_data();
            cout<<"Name>>"<<Name<<endl;
            cout<<"Age>>"<<Age<<endl;
            cout<<"Math Marks>>"<<Mmarks<<endl;
            cout<<"Physics Marks>>"<<Pmarks<<endl;
            cout<<"Chemistry Marks>>"<<Cmarks<<endl;
        }
};

class Result:public Student{
    protected:
        int Total_Marks,Per;
    public:
        Result(string name,int age,int math,int phy,int chem):Student(name,age,math,phy,chem){
            Total_Marks=Mmarks+Pmarks+Cmarks;
            Per=Total_Marks/3;
        }
        void show_data(){
            Student::show_data();
            cout<<"Total Marks>>"<<Total_Marks<<endl;
            cout<<"Percentage>>"<<Per<<endl;
        }
};

int main(){
    Human* ptr;
    string Name;
    cout<<"Enter Name>>"<<endl;
    cin>>Name;
    Result S(Name,21,98,87,75);   //Constructor
    ptr=&S;
    ptr->show_data();
    return 0;
}