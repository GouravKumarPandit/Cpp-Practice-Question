#include <iostream>
using namespace std;

int dltElement(int arr[], int index, int size)
{
    for (int i = index; i < size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    return (size - 1);
}

int main()
{
    int arr[100];
    int size, index;
    cout << "Enter the size of the array : " << endl;
    cin >> size;
    cout << "Enter the " << size << " element : " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter index number to delete element : " << endl;
    cin >> index;
    size = dltElement(arr, index, size);
    cout << "After deletion : " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}