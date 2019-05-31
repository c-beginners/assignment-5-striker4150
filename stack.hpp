#ifndef _HEADER_FILE_STACK_H
#define _HEADER_FILE_STACK_H

namespace stack {
    class Stack {
        private:
            int *stack_data;
            int size, top;
            
        public:
            Stack(int size);
            ~Stack();

            void push(int input);
            int pop();
            void empty();

            friend std::ostream& operator<<(std::ostream &stream, const stack::Stack &stack);
    };
}

#endif