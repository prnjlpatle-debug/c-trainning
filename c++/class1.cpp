#include<iostream>
using namespace std;
class myclass{
    public: 
    void mymethod();
};
void myclass::mymethod()
{
    cout<<"this is my method";
};
int main()
{
    myclass obj;
    obj.mymethod();
    return 0;
}