/*  We must have to declare a variable with static keyword and must be define outside the class.
    if we declare static variable in public than we can directly access the static variable.
    if we dont declare static varable inside the public than we have to use method to acess static variable.
    if we dont want to use object to acess the intance variable than we must use static keyword with method.
    By the help of this we access directaly by use class name to acess class variable.
*/

#include <iostream>
using namespace std;

class practice
{
    int id, age;
    static int count; //must be declare inside the class

public:
    void set_data(void)
    {
        cout << "Enter employee ID and AGE>>" << endl;
        cin >> id >> age;
        count++;
    }
    void show_data(void)
    {
        cout << id << " , " << age << endl;
    }
    static void coun(void)
    {
        cout << "Total Employee>>" << count << endl;
    }
};

int practice:: count;  //and must be define outside the class

int main()
{
    practice p1, p2, p3;
    p1.set_data();
    p2.set_data();
    p3.set_data();
    cout << endl;
    p1.show_data();
    p2.show_data();
    p3.show_data();
    practice::coun();
    return 0;
}