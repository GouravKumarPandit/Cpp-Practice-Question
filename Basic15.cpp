#include<iostream>
using namespace std;

int main(){
    int num,rev=0,r,num1;
    cout<<"Enter a number>>"<<endl;
    cin>>num;
    num1=num;
    while(num1>0){
        r = num1 % 10;
        rev = rev * 10 + r;
        num1 = num1 / 10;
    }
    if(num==rev)
        cout<<"Given number is Palindrome!!";
    else
        cout<<"Given number is not Palindrome!!";
}