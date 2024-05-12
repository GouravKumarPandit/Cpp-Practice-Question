#include <iostream>
#include<stdlib.h>
using namespace std;

int main()
{
    int i;
    int *ptr = (int *) malloc(5 * (sizeof(int)));
    if(ptr==NULL){
        cout<<"Spaces not available!!";
        exit(0);
    }
    cout<<"Enter 5 numbers>>"<<endl;
    for (i = 0; i < 5; i++)
    {
        cin >> *(ptr + i);
    }
    for (i = 0; i < 5; i++)
    {
        cout << *(ptr + i) << " ";
    }
    free(ptr);
    return 0;
}