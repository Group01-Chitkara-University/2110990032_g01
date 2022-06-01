#include <iostream>
using namespace std;

struct Employee
{
    int id;
    string name;
    int salary;
};

int main()
{

    Employee e1, e2;
    cin >> e1.id >> e1.name >> e1.salary;
    cin >> e2.id >> e2.name >> e2.salary;

if (e1.salary > e2.salary)
    {
        cout << e1.name << " has the greater salary.";
    }
    else
    {
        cout << e2.name << " has the greater salary.";
    }
cout<<"employee salary";








     return 0;
}
