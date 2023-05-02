OBJECTS=List.o main.o Node.o stack.o
CXXFLAGS=-g

all: $(OBJECTS)
	g++ -g -o main $(OBJECTS)

main: $(OBJECTS)
	g++ -g -o main $(OBJECTS)


main.o: main.cpp stack.h List.h Node.h

List.o: List.cpp Node.h List.h

Node.o: Node.cpp Node.h

stack.o: stack.cpp stack.h

clean:
	rm -f *.o