#include<iostream>
using namespace std;
bool STR(string str) {
    if(str == "") {
        return false;
    }else {
        return true;
    }
}
int main() {
    string str;
    cout << "ENTER A STRING: ";
    cin >> str;
    int a = STR(str);
    if(a == 1) {
        cout << "ANS : TRUE";
    }
    else{
       cout << "ANS : FALSE";
    }
    return 0;
}