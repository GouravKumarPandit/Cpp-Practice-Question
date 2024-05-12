#include<iostream>
using namespace std;

namespace MySpace{      //Creating our own namespace
    void fun1();
    int add(int ,int);
    class Dummy{       //Creating class inside the namespace
        public:
            void fun2();
    };
}
void MySpace :: fun1(){
    cout<<"We are in MySpace!!"<<endl;
}
void MySpace :: Dummy :: fun2(){
    cout<<"We are in Class!!"<<endl;
}
int MySpace :: add(int x,int y){
    return x+y;
}
