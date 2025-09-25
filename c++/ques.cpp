#include<iostream>
using namespace std;
class animal{
 public:
 void eat(){
    cout<<"tastyyyyy"<<endl;
 }
};
class bird : virtual public animal{
  public:
  void wing()
  {
    cout<<"udti firu"<<endl;
  }
};
class mammal : virtual public animal{
  public:
    void drink()
    {
      cout<<"paani pee rahi"<<endl;
    }
  };
  class bat : public mammal, public bird{
    public:
    void fly(){
      cout<<"ud rahi"<<endl;
    }
  };
  int main(){
    bat m1;
    m1.eat();
    m1.wing();
    m1.drink();
    m1.fly();
    return 0;
  }