#include <iostream>
using namespace std;

int main()
{
    int n, i, sno, pos;
    cout << "Enter the size of array>>" << endl;
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " number>>" << endl;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Which number you want to search>>" << endl;
    cin >> sno;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == sno)
        {
            cout << "Your search number is present at>>" << i << " position." << endl;
        }
    }
    return 0;
}