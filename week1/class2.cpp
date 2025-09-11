#include<iostream>
using namespace std;
class outer
{
    public:
    class inner
    {
        public:
        void display()
        {
            std::cout <<"Inner class\n";
        }
    };
};