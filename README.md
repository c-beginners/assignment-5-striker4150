# Stack

Challenge issued by **@dataxds**.

Write a program to implement a stack. A stack is a LIFO (last in, first out) data structure. The stack will be a dynamically allocated array of integers. The input will be the size. To add an element to the stack, you always have to put it on top, and to take from the stack you always have to take from the top. So, it's gonna be useful to track where the top is (at the beginning, it's the first spot, index 0). To have a functioning stack you will have to implement the following functions:

1) Push: Add an element to the top of the stack
2) Pop: Take an element from the top and return it
3) Empty: Empty the entire stack, again in order

Try to catch some of the situations that could happen (trying to push to a stack that's full, etc...)

Have the program run in a loop where the user can choose whether to push/pop/empty/end session.
When popping , you don't have to actually erase the data, it's good enough to know that the top is now an element lower...
You can use structs, but you don't have to.

Rules:
- No standard library except to print and take input (cout and cin). No C-style dynamic allocation with malloc, calloc, etc...
- No linked lists just yet

## Getting Started

### Prerequisites

* [GNU Compiler Collection](https://gcc.gnu.org/)
* [GNU Make](https://www.gnu.org/software/make/)

### Installing

Run the makefile in the project directory using the command

```
make
```

An executable named stack.exe will be compiled in the project folder.