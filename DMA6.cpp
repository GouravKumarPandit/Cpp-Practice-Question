#include<iostream>
using namespace std;

int main(){
    int* ptr;
    int i;
    ptr=new int[5];    //Daynamically allocate memory
    cout<<"Enter 5 number>>"<<endl;
    for(i=0;i<5;i++){
        cin>>*(ptr+i);
    }
    cout<<"Your enter data are>>"<<endl;
    for(i=0;i<5;i++){
        cout<<*(ptr+i)<<" ";
    }
    delete[] ptr;
    return 0;
}