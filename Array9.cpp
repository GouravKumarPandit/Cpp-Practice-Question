#include<iostream>
using namespace std;

int[] Input(int size){
    int Arr[size];
    cout<<"Enter "<<size<<" number>>"<<endl;
    for (int i = 0; i < size; i++)
    {
        cin>>Arr[i];
    }
    return Arr;
}

int main(){
    int Arr[]=Input(5);
    for (int i = 0; i < 5; i++)
    {
        cout<<Arr[i]<<" ";
    }
    return 0;
}