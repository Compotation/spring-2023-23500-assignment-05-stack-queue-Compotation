#include "Queue.h"

Queue::Queue() {
  vec = std::vector<int>(QUEUE_MAX_SIZE);
  frontIndex = -1;
  backIndex = -1;
}

void Queue::enqueue(int item) {
  if (backIndex == -1) {
    vec[0] = item;
    backIndex = 0;
    frontIndex = 0;
    return;
  }
  vec[backIndex + 1] = item;
  backIndex++;
}

std::string Queue::toString() {
  std::string str;
  for (int i = frontIndex; i <= backIndex; i++) {
    str += std::to_string(vec[i]) + ",";
  }
  str.pop_back();
  return str;
}

int Queue::front() {
  return vec[frontIndex];
}

int Queue::dequeue() {
  vec.erase(vec.begin());
  backIndex--;
  return vec[frontIndex];
}

bool Queue::is_empty() {
  return backIndex == -1 || frontIndex == -1;
}
