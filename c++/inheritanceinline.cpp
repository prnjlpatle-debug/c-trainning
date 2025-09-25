#include<iostream>
using namespace std;
inline int add(int a, int b)
{
    return a + b;
}
int main()
{
    cout << "The sum is " << add(5, 6) << endl;
    return 0;
}