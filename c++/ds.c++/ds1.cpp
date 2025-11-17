#include <iostream>
#include <stdlib.h>
#define null 0
using namespace std;

struct node {
    int data;
    node* next;
};

node *first, *temp, *ttemp, *p, *q, *r, *ptemp, *pttemp, *ntemp, *nttemp;

void init() {
    first = temp = ttemp = null;
}

void createfirst(int val) {
    first = new node;
    first->data = val;
    first->next = null;
}

void addnode(int val) {
    if (first == null) {
        createfirst(val);  // auto-create if first doesn't exist
        return;
    }

    temp = first;
    while (temp->next != null) {
        temp = temp->next;
    }
    ttemp = new node;
    ttemp->data = val;
    ttemp->next = null;
    temp->next = ttemp;
}

void disp() {
    temp = first;
    while (temp != null) {
        cout << temp->data << endl;
        temp = temp->next;
    }
}

void add_after(int x, int y) {
    temp = first;
    while (temp != null && temp->data != x)
        temp = temp->next;

    if (temp == null) {
        cout << "Value " << x << " not found in the list." << endl;
        return;
    }

    ttemp = temp->next;
    p = new node;
    p->data = y;
    p->next = ttemp;
    temp->next = p;
}

int main() {
    init();
    createfirst(10);
    addnode(20);
    addnode(30);
    addnode(50);
    addnode(60);

    cout << "Initial List:\n";
    disp();

    cout << "\nAdd after node 30 -> insert 40:\n";
    add_after(30, 40);
    disp();

    return 0;
}
