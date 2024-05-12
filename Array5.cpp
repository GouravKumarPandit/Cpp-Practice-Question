#include <iostream>
using namespace std;

int main()
{
    int n, i, max, min;
    cout << "Enter array size>>" << endl;
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " number>>" << endl;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    max = arr[0];
    min = arr[0];
    for (i = 0; i < n; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    for (i = 0; i < n; i++)
    {
        if (arr[i] < min)
            min = arr[i];
    }
    cout << "MAXIMUM number>>" << max << " and minmum number is>>" << min << endl;
    return 0;
}