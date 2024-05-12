#include<iostream>
using namespace std;

int main(){
    int* ptr;    //Creating a pointer variable
    ptr=new int(100);    //Daynamic allocate memory
    cout<<*ptr<<endl;
    delete ptr;
    return 0;
}