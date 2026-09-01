#include <iostream>
using namespace std;

class Employee
{
    char name[30], designation[30];
    int code, experience, age;

public:
    void input()
    {
        cout << "Enter employee name: ";
        cin >> name;

        cout << "Enter employee code: ";
        cin >> code;

        cout << "Enter designation: ";
        cin >> designation;

        cout << "Enter years of experience: ";
        cin >> experience;

        cout << "Enter age: ";
        cin >> age;
    }

    void display()
    {
        cout << "\nEmployee Details\n";
        cout << "Name = " << name << endl;
        cout << "Code = " << code << endl;
        cout << "Designation = " << designation << endl;
        cout << "Experience = " << experience << " years" << endl;
        cout << "Age = " << age << endl;
    }
};

int main()
{
    Employee e;

    e.input();
    e.display();

    return 0;
}