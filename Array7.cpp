#include <iostream>
using namespace std;

class Array
{
    int i, j, num, arr[20];

public:
    void set_data(int n)
    {
        num = n;
        cout << "Enter " << n << " numbers of element>>" << endl;
        for (i = 0; i < num; i++)
            cin >> arr[i];
    }
    void show_data(void)
    {
        for (i = 0; i < num; i++)
            cout << arr[i] << " ";
    }
    void revArr(void)
    {
        for (i = 0, j = num - 1; i < num / 2, j >= num / 2; i++, j--)
        {
            int temp[5];
            temp[i] = arr[i];
            arr[i] = arr[j];
            arr[j] = temp[i];
        }
    }
};

int main()
{
    Array A;
    int n;
    cout << "Enter length of array>>" << endl;
    cin >> n;
    A.set_data(n);
    cout << "Your numbers are>>" << endl;
    A.show_data();
    A.revArr();
    cout << "\nAfter reverse numbers are>>" << endl;
    A.show_data();
    return 0;
}
