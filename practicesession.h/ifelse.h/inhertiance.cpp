#include<iostream>
  using namespace std;

  class Animal
  {
    public:
    void eat()
    {
        cout << "THIS ANIMAL EATS FOOD"<< endl;
    }

    };
    class Dog : public Animal
    {
        public:
        void bark()
        {
            cout<<"THE DOG BARKS"<< endl;
        }
    };

    int main(){
         Dog d1,d2;
         d1.eat();
         d2.bark();
         
         
    }
  
   