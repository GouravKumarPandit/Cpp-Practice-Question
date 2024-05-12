#include<iostream>
using namespace std;

class constr
{
    public:
        constr()
        {
            cout<<"You are in constructor."<<endl;
        }
};

int main()
{
    constr c;
    cout<<"Your are in main."<<endl;
    return 0;
}