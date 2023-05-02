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

  helperList->remove(0);
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
