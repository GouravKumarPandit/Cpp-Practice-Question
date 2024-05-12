#include<iostream>
using namespace std;

template <class T>
T Sum(T Arr[],int Size){
    T Sum=0;
    for(int i=0;i<Size;i++){
        Sum+=Arr[i];
    }
    return Sum;
}

int main(){
    int Arr[5]={1,2,3,4,5};
    float Arr1[3]={10.25,20.35,30.56};
    int sum=Sum(Arr,5);
    float sum1=Sum(Arr1,3);
    cout<<"Sum of given number is >>"<<sum<<endl;
    cout<<"Sum of given number is >>"<<sum1<<endl;
    return 0;
}