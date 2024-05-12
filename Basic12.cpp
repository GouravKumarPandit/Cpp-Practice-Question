#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter a number>>"<<endl;
    cin>>num;
    if(num>80)
      cout<<"GRADE A."<<endl;
    else if(num>70 && num<=80)
            cout<<"GRADE B."<<endl;
    else if(num>60 && num<=70)
            cout<<"GRADE C."<<endl;
    else if(num>50 && num<=60)
            cout<<"GRADE D."<<endl;
    else
        cout<<"GRADE E."<<endl;
    return 0;
}
