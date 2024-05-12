#include <iostream>
using namespace std;

struct employee
{
    char name[30];
    int emp_id, age;
};

struct company
{
    employee emp;
    char com_name[30], addr[30];
    char group;
};

int main()
{
    int n, i;
    cout << "Enter the number of employee>>" << endl;
    cin >> n;
    company com_emp[n];
    cout << "Enter Employee Information>>" << endl;
    fflush(stdin);
    for (i = 0; i < n; i++)
    {
        fflush(stdin);
        cout << "Enter company name>>" << endl;
        gets(com_emp[i].com_name);
        cout << "Enter Employee " << i + 1 << " name>>" << endl;
        gets(com_emp[i].emp.name);
        cout << "Enter Employee " << i + 1 << " id_no>>" << endl;
        cin >> com_emp[i].emp.emp_id;
        cout << "Enter Employee " << i + 1 << " age>>" << endl;
        cin >> com_emp[i].emp.age;
        fflush(stdin);
        cout << "Enter Employee Group " << i + 1 << " Department>>" << endl;
        cin >> com_emp[i].group;
        cout << endl;
    }

    cout << "Employee details>>" << endl;
    for (i = 0; i < n; i++)
    {
        cout << " EMPLOYEE NAME>>" << com_emp[i].com_name << endl;
        cout << " EMPLOYEE " << i + 1 << " NAME>>" << com_emp[i].emp.name << endl;
        cout << " EMPLOYEE " << i + 1 << " ID>>" << com_emp[i].emp.emp_id << endl;
        cout << " EMPLOYEE " << i + 1 << " AGE>>" << com_emp[i].emp.age << endl;
        cout << " EMPLOYEE " << i + 1 << " GROUP DEPARTMENT>>" << com_emp[i].group << endl;
        cout << endl;
    }
    return 0;
}