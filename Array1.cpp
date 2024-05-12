#include <iostream>
using namespace std;

int main()
{
    //int a[]={1,2,3,4,5,6};       Initialization of element in array
    //int a[5];   //Assinging of element in array and we must have to enter the size of array.
    //a[0]=1;
    //a[1]=2;
    //a[2]=3;
    //a[3]=4;
    //a[4]=5;
    //cout<<a[0]<<" ";    //Without using for loop and print by calling their index
    //cout<<a[1]<<" ";
    //cout<<a[2]<<" ";
    //cout<<a[3]<<" ";
    //cout<<a[4]<<" ";
    //int a[5]={0};
    //int a[5]={1,2,5};
    int a[5] = {[0] = 4, [4] = 78};    //Another way of initialization
    cout << a[0] << " ";
    cout << a[1] << " ";
    cout << a[2] << " ";
    cout << a[3] << " ";
    cout << a[4] << " ";
    return 0;
}