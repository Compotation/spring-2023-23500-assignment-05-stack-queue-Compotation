#pragma once

#include <vector>
#include "string"

const int QUEUE_MAX_SIZE = 10;

class Queue {
private:
  std::vector<int> vec;
  int frontIndex;
  int backIndex;
public:
  Queue();

  void enqueue(int);

  int front();

  int dequeue();

  std::string toString();
};