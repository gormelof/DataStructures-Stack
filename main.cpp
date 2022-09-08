//  main.cpp
//  Stack
//
//  Created by Ömer Faruk Görmel on 30/09/14.
//

#include <iostream>

using namespace std;

int stack[5]; // Create stack
int top, maxLength;

bool full () {
    if (top == maxLength) {
        // Full
        return false;
    }
    else {
        return true;
    }
}

bool empty () {
    if (top == 0) {
        // Empty
        return false;
    }
    else {
        return true;
    }
}

void push () {
    if (full()) {
        cout << "Value : ";
        cin >> stack[top];
        top++;
    }
    else {
        cout << "Full...\n";
    }
}

void pop () {
    if (empty()) {
        top--;
        stack[top] = 0; // NULL
    }
    else {
        cout << "Empty...\n";
    }
}

int main(int argc, const char * argv[]) {
    
    top = 0, maxLength = 5; // First Value
    int select;
    
    while (select != 4) {
        cout << "(1) Push\n(2) Pop\n(3) Show stack\n(4) Exit"; // Menu
        cout << "\nSelect : ";
        cin >> select;
        switch (select) {
            case 1: // Push
            push();
            break;
            case 2: // Pop
            pop();
            break;
            case 3: // Show stack
            for (int i = 0; i<maxLength; i++) {
                cout << "stack[" << i << "] : " << stack[i] << endl;
            }
            break;
            default: cout << "Try again...\n";
        }
    }
    
    return 0;
}
