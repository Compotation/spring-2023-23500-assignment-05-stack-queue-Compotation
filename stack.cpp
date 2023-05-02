#include "stack.h"

void stack::push(std::string item){
//  if (topindex >= 5){
//    throw STACK_ERR_FULL;
//  }
  
  helperList->insert(item);
}

std::string stack::pop(){
//  if (topindex <= 0){
//    throw STACK_ERR_EMPTY;
//  }

  if (helperList->length() == 0) {
    return "empty";
  }
  helperList->remove(0);
  if (helperList->length() == 0) {
    return "empty";
  }
  return helperList->getHead()->getData();
}

std::string stack::top(){
//  if (topindex <= 0){
//    throw STACK_ERR_EMPTY;
//  }
  
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
