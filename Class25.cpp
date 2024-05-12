#include<iostream>
using namespace std;

class practice
{
    int x;
    static int count;
    public:
        void set_data(void)
        {
            cout<<"Inter a number>>"<<endl;
            cin>>x;
            count++;
        }
        void show_data(void)
        {
            cout<<x<<" "<<count<<endl;
        }
};
int practice::count;

int main()
{
    practice a,b;
    a.set_data();
    a.show_data();
    b.set_data();
    b.show_data();
    return 0;
}
