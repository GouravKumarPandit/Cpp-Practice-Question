#include<iostream>
using namespace std;

class person{
    protected:
        char name[30],add[30];
        int age,clg_id;
    public:
        void set_data(void){
            cout<<"Enter name>>"<<endl;
            gets(name);
            cout<<"Enter address>>"<<endl;
            gets(add);
            cout<<"Enter age and clg id>>"<<endl;
            cin>>age>>clg_id;
        }
        void show_data(){
            cout<<"Name>>"<<name<<endl;
            cout<<"Address>>"<<add<<endl;
            cout<<"College_Id>>"<<clg_id<<endl;
            cout<<"Age>>"<<age<<endl;
        }
};

class student:public person{
    int Pmarks,Cmarks,Mmarks;
    char Fav_char;
    public:
        void set_data2(){
            set_data();
            cout<<"Enter physics marks>>"<<endl;
            cin>>Pmarks;
            cout<<"Enter chemistry marks>>"<<endl;
            cin>>Cmarks;
            cout<<"Enter math marks>>"<<endl;
            cin>>Mmarks;
            cout<<"Enter favourite character>>"<<endl;
            cin>>Fav_char;
        }
        void show_data2(){
            show_data();
            cout<<"Physics marks>>"<<Pmarks<<endl;
            cout<<"Chemistry marks>>"<<Cmarks<<endl;
            cout<<"Math marks>>"<<Mmarks<<endl;
        }
};

int main(){
    student stu1;
    stu1.set_data2();
    stu1.show_data2();
    return 0;
}