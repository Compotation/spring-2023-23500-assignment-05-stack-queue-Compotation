#include "iostream"
#include "List.h"
#include "stack.h"
#include "Queue.h"

int main() {
  stack *mystack = new stack();
  mystack->push("hi");
  mystack->push("no");
  mystack->push("yes");
  std::cout << mystack->toString() << "\n";
  mystack->pop();
  std::cout << mystack->toString() << "\n";
  delete mystack;
  std::cout << "\nqueue\n\n";
  auto *q = new Queue;
  q->enqueue(2);
  std::cout << q->toString() << "\n";
  q->enqueue(50);
  std::cout << q->toString() << "\n";
  q->enqueue(-1);
  std::cout << q->toString() << "\n";

  q->dequeue();
  std::cout << q->toString() << "\n";

  return 0;
}