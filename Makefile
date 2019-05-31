CPP = g++
CPPFLAGS = -g -std=c++11
PROGS = stack.exe

# Cross-OS clean
ifdef OS
	RM = del /Q
else
	RM = rm -f
endif

.PHONY: all clean

all: $(PROGS)

stack.exe: main.o stack.o
	$(CPP) -o stack.exe main.o stack.o

main.o: main.cpp stack.hpp
	$(CPP) $(CPPFLAGS) -c main.cpp

stack.o: stack.cpp stack.hpp
	$(CPP) $(CPPFLAGS) -c stack.cpp

clean:
	$(RM) $(PROGS) *.o