#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    int n, i;
    cout << "Enter the size of length>>" << endl;
    cin >> n;
    int *ptr = (int *) calloc(n, sizeof(int)); //Dynamically allocating memory through calloc
    if (ptr == NULL){
        cout << "No Space Available!!" << endl;
        exit(0);
    }
    cout << "Enter " << n << " number>>" << endl;
    for (i = 0; i < n; i++)
    {
        cin >> *(ptr + i);
    }
    for (i = 0; i < n; i++)
    {
        cout << *(ptr + i) << " ";
    }
    free(ptr); //release the memory through free keyword
    return 0;
}