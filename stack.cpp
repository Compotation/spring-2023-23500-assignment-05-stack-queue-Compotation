#include "stack.h"

void stack::push(std::string item){
  if (topindex >= 5){
    throw STACK_ERR_FULL;
  }
  
  helperList->insert(item);
}

std::string stack::pop(){
  if (topindex <= 0){
    throw STACK_ERR_EMPTY;
  }
  
  int tmp = a[topindex-1];
  topindex--;
  return tmp;
}

std::string stack::top(){
  if (topindex <= 0){
    throw STACK_ERR_EMPTY;
  }
  
  return a[topindex-1];
}

bool stack::is_empty(){
  return topindex==0;
}
