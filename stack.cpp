#include "stack.h"

void stack::push(std::string item){
  if (helperList->length() >= MAX_SIZE-1){
    throw STACK_ERR_FULL;
  }
  
  helperList->insert(item);
}

std::string stack::pop(){
  if (is_empty()){
    throw STACK_ERR_EMPTY;
  }

  helperList->remove(0);
  if (is_empty()) {
    return "empty";
  }
  return helperList->getHead()->getData();
}

std::string stack::top(){
  if (is_empty()){
    throw STACK_ERR_EMPTY;
  }
  
  return helperList->getHead()->getData();
}

bool stack::is_empty(){
  return helperList->length() == 0;
}

stack::stack() {
  helperList = new List();
}

stack::~stack() {
  delete helperList;
}

std::string stack::toString() {
  return helperList->toString();
}
