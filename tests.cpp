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