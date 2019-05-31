#include <iostream>

#include "stack.hpp"

/*
 * Stack constructor
 */
stack::Stack::Stack(int size) {
    stack_data = new int[size]();
    stack::Stack::size = size;
    top = -1;
}

/*
 * Stack destructor
 */
stack::Stack::~Stack() {
    delete[] stack_data;
}

/*
 * Stack push operation
 * Throws exception message if stack is full
 */
void stack::Stack::push(int input) {
    if(top + 1 >= size) {
        throw "Too many elements in stack";
    }

    stack_data[++top] = input;
}

/*
 * Stack pop operation
 * Throws exception message if stack is empty
 */
int stack::Stack::pop() {
    if(top == -1) {
        throw "No elements in stack";
    }

    int data = stack_data[top];
    stack_data[top--] = 0;

    return data;
}

/*
 * Stack empty operation
 * Empties the stack regardless of capacity
 */
void stack::Stack::empty() {
    for(int i = top; i >= 0; i--) {
        stack::Stack::pop();
    }
}

/*
 * Stack operator<< overload
 * Writes a formatted representation of the stack to a given output stream
 */
std::ostream& stack::operator<<(std::ostream &stream, const stack::Stack &stack) {
    for(int i = stack.size - 1; i >= 0; i--) {
        // If it's the top element, mark it with an arrow
        if(i == stack.top) {
            stream << stack.stack_data[i] << " <-" << std::endl;
        } else {
            stream << stack.stack_data[i] << std::endl;
        }
    }

    return stream;
}