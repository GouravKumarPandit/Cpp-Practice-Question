//Insert elemnt to a partilcular index either sorted or unsorted, same code.....
#include<iostream>
#define MAX 100
using namespace std;

int insElement(int arr[], int index, int elem, int size)
{
    if(size==MAX){
        cout<<"Sorry memory not available!!";
        exit(0);
    }
    for (int i = size-1; i >=index; i--){
        arr[i+1] = arr[i];
    }
    arr[index]=elem;
    return (size + 1);
}

int main(){
    int arr[100];
    int size, index,elem;
    cout << "Enter the size of the array : " << endl;
    cin >> size;
    if(size > MAX ){
        cout<<"Size should be smaller than "<<MAX;
        exit(0);
    }
    cout << "Enter the " << size << " element : " << endl;
    for (int i = 0; i < size; i++){
        cin >> arr[i];
    }
    cout<<"Enter index number and element to insert : " << endl;
    cin>>index>>elem;
    size = insElement(arr, index, elem, size);
    cout << "After instertion : " << endl;
    for (int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    return 0;
}