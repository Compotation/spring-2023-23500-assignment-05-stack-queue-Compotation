#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "doctest.h"
#include "stack.h"

TEST_CASE("push") {
  stack *s = new stack();
  s->push("hi");
  CHECK_EQ(s->toString(), "hi-->nullptr");
  s->push("no");
  CHECK_EQ(s->toString(), "no-->hi-->nullptr");
}
