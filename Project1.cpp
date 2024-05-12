#include<iostream>
#include<conio.h>
using namespace std;

int main(){
    char Password[15];
    int count=0;
    cout<<"Enter your password>>"<<endl;
    for(int i=0; i<=15; i++){
        count+=1;
        Password[i]=getch();
        cout<<"*";
        if(Password[i]==13 && i<7){
            cout<<"\nYour Password should be greater than or equal to 7 Character."<<endl;
            break;
        }
        if(i==15)
            cout<<"\nPassword should be equal or smaller than 15 Character."<<endl;
        if(Password[i]==13)
            break;
    }
    if(count>=7 && count<=15){
        cout<<endl<<"Your password is>>"<<endl;
        for(int i=0; i<count; i++){
            cout<<Password[i];
        }
    }
    return 0;
}