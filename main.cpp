#include <cstring>
#include <iostream>

#include "stack.hpp"

/*
 * Manipulates a pseudo-stack through user input
 */
int main() {
    char *input = new char[1024];
    int size = 0, data;
    bool exit_flag = false;

    std::cout << "Enter the size of the stack: ";
    try {
        std::cin >> size;

        // Throw exception if size is invalid
        if(size < 1) {
            throw size;
        }
    } catch(int size) {
        std::cout << "Invalid input size of " << size << std::endl;

        return -1;
    }

    // Create the new Stack object
    stack::Stack stack(size);

    // User input loop
    do {
        std::cout << ">> ";
        std::cin >> input;

        if(strcmp(input, "push") == 0) {
            // Read input data
            std::cin >> data;

            // Attempt to push data
            try {
                stack.push(data);
            } catch(const char *errmsg) {
                std::cerr << errmsg << std::endl;
            }
        } else if(strcmp(input, "pop") == 0) {
            // Attempt to pop data
            try {
                std::cout << stack.pop() << std::endl;
            } catch(const char *errmsg) {
                std::cerr << errmsg << std::endl;
            }
        } else if(strcmp(input, "empty") == 0) {
            stack.empty();
            std::cout << "Stack emptied" << std::endl;
        } else if(strcmp(input, "print") == 0) {
            std::cout << stack;
        } else if(strcmp(input, "end") == 0){
            exit_flag = true;
        } else {
            std::cout << "Invalid command" << std::endl;
        }
    } while(!exit_flag);

    return 0;
}