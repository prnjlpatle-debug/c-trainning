#include<iostream>
using namespace std;
class car
{
    public:
    string brand;
    string model;
    int year;
    car(string x,string y, int z)
    {
    brand =x;
    model =y;
    year =z;
    }
};
int main()
{
    car carobj1("BMW","X5",1995);
    car carobj2("FORD","MUSTANG",1969);
    cout<<carobj1.brand<<"BMW"<<carobj1.model<<"X5"<<carobj1.year<<1995"\n";
    cout<<carobj2.brand<<"ford"<<carobj2.model<<"Mustang"<<carobj2.year<<1969"\n";
    return 0;
}
