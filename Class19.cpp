#include <iostream>
using namespace std;
class check
    {
        public:
        int x;
        static int y;     //drcaleration

    
        /*void set_data(int a)
        {
            x = a;
        }*/
        static void show_data(void)
        {
            cout << y << endl;
        }
    };
    int check:: y;   //Definition 
int main(){
    //check c;
    check.y=10;
    y.show_data();
    /*c.set_data(5);
    c.show_data();*/
    return 0;
}