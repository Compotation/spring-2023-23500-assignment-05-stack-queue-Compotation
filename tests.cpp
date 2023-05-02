#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "doctest.h"
#include "stack.h"
#include "Queue.h"

TEST_CASE("push") {
  stack *s = new stack();
  s->push("hi");
  CHECK_EQ(s->toString(), "hi-->nullptr");
  s->push("no");
  CHECK_EQ(s->toString(), "no-->hi-->nullptr");
}

TEST_CASE("pop") {
  stack *s = new stack();
  s->push("hi");
  s->pop();
  CHECK_EQ(s->toString(), "nullptr");
  s->push("hi");
  s->push("no");
  s->pop();
  CHECK_EQ(s->toString(), "hi-->nullptr");
}

TEST_CASE("empty") {
  stack *s = new stack();
  CHECK(s->is_empty());
}

TEST_CASE("top") {
  stack *s = new stack();
  s->push("hi");
  CHECK_EQ(s->top(), "hi");
}

TEST_CASE("enqueue") {
  Queue *q = new Queue();
  q->enqueue(2);
  q->enqueue(3);
  q->enqueue(10);
  CHECK_EQ(q->toString(), "2,3,10");
}

TEST_CASE("front") {
  Queue *q = new Queue();
  q->enqueue(2);
  q->enqueue(3);
  q->enqueue(10);
  CHECK_EQ(q->front(), 2);
}

TEST_CASE("dequeue") {
  Queue *q = new Queue();
  q->enqueue(2);
  q->enqueue(3);
  q->enqueue(10);
  CHECK_EQ(q->dequeue(), 3);
}

TEST_CASE("empty") {
  Queue *q = new Queue();
  q->enqueue(2);
  q->enqueue(3);
  q->dequeue();
  q->dequeue();
  CHECK(q->is_empty());

  Queue *q2 = new Queue();
  CHECK(q->is_empty());
}


TEST_CASE("full") {
  Queue *q = new Queue();
  CHECK_FALSE(q->is_full());
  for (int i = 0; i < 10; i++) {
    q->enqueue(2);
  }
  CHECK(q->is_full());
}

TEST_CASE("exceptions") {
  auto *s1 = new stack();
  try {
    s1->pop();
  } catch (int e) {
    std::cerr << "error: " << e << " (empty stack)\n";
  }
  for (int i = 0; i < 4999; i++) {
    s1->push("");
  }
  try {
    s1->push("");
  } catch (int e) {
    std::cerr << "error: " << e << " (full stack)\n";
  }
}