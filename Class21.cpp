#include<iostream>
#include<string.h>
using namespace std;

class cop
{
    char str1[30],str2[30];
    public:
        void set_data(void)
        {
            cout<<"Enter your name>>"<<endl;
            gets(str1);
        }
        void copstr(void)
        {
            cout<<strcpy(str2,str1)<<endl;
        }
};

int main()
{
    cop s1;
    s1.set_data();
    s1.copstr();
    return 0;
}