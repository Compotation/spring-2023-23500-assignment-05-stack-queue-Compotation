OBJECTS=List.o Node.o stack.o Queue.o
CXXFLAGS=-g

all: main.o $(OBJECTS)
	g++ -g -o main main.o $(OBJECTS)

main: main.o $(OBJECTS)
	g++ -g -o main main.o $(OBJECTS)

tests: tests.o $(OBJECTS)
	g++ -g -o tests tests.o $(OBJECTS)

main.o: main.cpp stack.h List.h Node.h

List.o: List.cpp Node.h List.h

Node.o: Node.cpp Node.h

stack.o: stack.cpp stack.h

tests.o: tests.cpp doctest.h

Queue.o: Queue.cpp Queue.h
clean:
	rm -f main tests *.o