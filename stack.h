#pragma once

#include "List.h"

#define STACK_ERR_EMPTY 1
#define STACK_ERR_FULL 2
#define STACK_ERR_OTHER 4


class stack{
 private:
  List *helperList;

 public:
  void push(std::string); // add an item to the top
  std::string pop(); // remove and return an item from the top of the stack
  std::string top(); // returns but doesn't remove the value on top
  bool is_empty(); // returns true if stack is empty
    
  /*

    additional common operataions:
    void add+vector(std::vector<int> a) <-- adds all the items in a to stack
    int [] get-vector()  <-- returns an array with all the items
    swap() <-- swaps the top two elements on the stack
    swap(5) <-- swaps the value at top with the value 5 down

    also constructors 
    
  */
};
