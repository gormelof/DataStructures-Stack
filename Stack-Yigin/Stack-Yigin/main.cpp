//
//  main.cpp
//  Stack-Yigin
//
//  Created by Ömer Faruk Görmel on 30/09/14.
//  Copyright (c) 2014 gormelof. All rights reserved.
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
        cout << "Full...";
    }
}

void pop () {
    if (empty()) {
        stack[top] = NULL;
        top--;
    }
    else {
        cout << "Empty...";
    }
}

int main(int argc, const char * argv[]) {
    
    return 0;
}
