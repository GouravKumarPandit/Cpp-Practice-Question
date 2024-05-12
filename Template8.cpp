#include<iostream>
using namespace std;

template <class t1,class t2>    //It recieve two different type of data type,but if we pass same type of data type than t1 accept
                                // one data type and t2 accept another type 
float Sum(t1 X,t2 Y){
    return (X + Y);
}

int main(){
    cout<<"Sum of int and int>>"<<Sum(40,50)<<endl;
    cout<<"Sum of float and float>>"<<Sum(40.85,50.41)<<endl;
    cout<<"Sum of int and float>>"<<Sum(40,50.62)<<endl;
    cout<<"Sum of float and int>>"<<Sum(40.25,50)<<endl;
    return 0;

}