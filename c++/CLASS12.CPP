#include<iostream>
using namespace std;
class Employee
{
    private:
    int salary;
    public:
    int setsalary(int s)
    salary = s;
    {
        int getsalary()
        {
            return salary;
        }
    }
};    
    int main()
    {
        Employee myObj;
        myObj.setsalary(50000);
        cout<<myObj.getsalary;
        return 0;
    }
