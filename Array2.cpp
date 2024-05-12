#include<iostream>
#include<stdlib.h>
#define MAX 100
using namespace std;

int main(){
    int a[MAX],n,i;
    cout<<"Enter the size of the array>>"<<endl;
    cin>>n;
    if(n>MAX){
        cout<<"Size should be smaller than "<<MAX<<endl;
        exit(0);
    }
    cout<<"Enter "<<n<<" number>>"<<endl;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Your enter number is>>"<<endl;
    for(i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}