#include<iostream>
#define MAX 100
using namespace std;

int dltElement(int arr[], int elem, int size){
    int index=0;
    if(arr[size-1]==elem)
        return (size - 1);
    for(int i=0;i<size;i++){
        if(arr[i]==elem){
            index=i;
            //break;
        }
    }
    if(index==0){
        cout<<"Sorry element not found.";
        exit(0);
    }
    for (int i = index; i < size - 1; i++){
        arr[i] = arr[i + 1];
    }
    return (size - 1);
}

int main(){
    int arr[MAX];
    int size, elem;
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
    cout << "Enter element to delete : " << endl;
    cin >> elem;
    size = dltElement(arr, elem, size);
    cout << "After deletion : " << endl;
    for (int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    return 0;
}