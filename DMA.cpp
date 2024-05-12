#include <iostream>
using namespace std;

int main()
{
    int size, i;
    cout << "Enter size>>" << endl;
    cin >> size;
    int *ptr = new int[size]; //Dyanamic memory allocation
    cout << "Enter " << size << " number>>" << endl;
    for (i = 0; i < size; i++)
    {
        // cin>>*(ptr+i);
        cin >> ptr[i];
    }
    cout << "Your enter number are>>" << endl;
    for (i = 0; i < size; i++)
    {
        // cout<<*(ptr+i)<<" ";
        cout << ptr[i] << " ";
    }
    delete ptr;
    return 0;
}