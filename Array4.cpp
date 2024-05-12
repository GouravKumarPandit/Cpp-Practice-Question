#include<iostream>
#define MAX 100
using namespace std;

int main(){
    int arr[MAX],i,n,sum=0;
    float avg;
    cout<<"Enter the size of array>>"<<endl;
    cin>>n;
    if(n>MAX){
        cout<<"Size should be smaller than "<<MAX<<endl;
        exit (0);
    }
    cout<<"Enter array element>>"<<endl;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Your enter element are>>"<<endl;
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
        sum+=arr[i];
    }
    avg=sum/n;
    cout<<"\nAverage of given number is>>"<<avg<<endl;
    return 0;
}