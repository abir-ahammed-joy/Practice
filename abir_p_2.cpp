#include<iostream>
using namespace std;
class Student
{
public:
    int id;
    double cgpa;
    string varsity;
    Student(int a, double b)
    {
        id = a;
        cgpa = b;
    }
    void display1()
    {
        cout << id << " " << cgpa <<endl;
    }
     Student(int a, double b, string c)
    {
        id = a;
        cgpa = b;
        varsity = c;
    }
    void display2()
    {
        cout << id << " " << cgpa << " " << varsity <<endl;
    }
    Student()
    {
        cout <<"This is default constructor";
    }
};
int main()
{
    Student lamia(101,3.90);
    Student hasan(102,3.80,"Prime");
    lamia.display1();
    hasan.display2();
    Student saime;
    return 0;
}
