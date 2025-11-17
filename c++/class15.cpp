#include <iostream>
using namespace std;

class Rectangle {
    int length, breadth;
    public:
    void input() {
        cout << "Enter length: ";
        cin >> length;
        cout << "Enter breadth: ";
        cin >> breadth;
    }
    int  area() {
        return length * breadth;
    }
    int perimeter() {
        return 2 * (length + breadth);
    }
    int issquare()
    {
        length==breadth;
    }
    void display() {
        cout << "Area: " << area() << endl;
        cout << "Perimeter: " << perimeter() << endl;
        cout<<"length==breadth:"<<issquare()<<endl;
    }
};

int main() {
    Rectangle r;
    r.input();
    r.display();
    return 0;
}
