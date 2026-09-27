#include <iostream>
using namespace std;

class Employee
{
private:
    int id;
    double salary;

public:
    // Parameterized constructor
    Employee(int i, double s)
    {
        id = i;
        salary = s;
    }

    // Function to display employee information
    void display()
    {
        cout << "Employee ID: " << id << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main()
{
    // Creating an object and passing two parameters
    Employee emp(101, 50000);

    // Display employee information
    emp.display();

    return 0;
}
