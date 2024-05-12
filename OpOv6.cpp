#include<iostream>
using namespace std;

class op{
    int x,y;
    public:
        op(int a,int b){
            x=a;y=b;
        }
        void show_data(){
            cout<<x<<" "<<y<<endl;
        }
        void operator*=(op o){
            x=x*o.x;
            y=y*o.y;
        }
};
int main(){
    op o1(4,5),o2(6,7);
    o1.show_data();
    o2.show_data();
    o1*=o2;      //o1=o1*o2;
    o1.show_data();
    return 0;
}

/* Operator overloading :- When we need to calculate some mathyematics computation than we can not apply normal airthmatic operatipon
in user defined data type,in this situation we apply or we use opeartor overloading because compliler did not understand how
to apply airthmatic operation in user defined data type.
syntax:- {{return type}} operator(airthmatic operators){{recieving object}}
{
    class name object name;
    object name.instances variable=instances variable(operator sign)recieving object.instances variable;
}*/