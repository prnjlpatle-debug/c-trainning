#include<iostream>
using namespace std;
class Cars
{
    public:
    void startengine()
    {
        cout << "engine started" << endl;
    }
};
class driver{
public:
    void drive(Cars &car)
    {
        car.startengine();
        cout << "driving the car" << endl;
    }
};
int main()
{
    Cars mycar;
    driver driver;
    driver.drive(mycar);
    return 0;
}