#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
struct Node {
  int data;
  struct Node *next;
};

struct List {
  struct Node *head;
  size_t len;
};


struct List *createList() {
  struct List *ret = malloc(sizeof(struct List));
  ret->head = NULL;
  ret->len = 0;
  return ret;
}

void addToFront(struct List *l, int elem) {
  struct Node *newHead = malloc(sizeof(struct Node));
  newHead->data = elem;
  newHead->next = l->head;
  l->head = newHead;
  ++l->len;
}

int pop(struct List *l, int i) {
  // Removes the ith item from the list if one exists and returns
  // the integer stored there
  assert(l->len > i);
  if (i == 0) {
    // If this is the case we must update the head pointer
    struct Node *toDelete = l->head;
    l->head = l->head->next;
    int res = toDelete->data;
    free(toDelete);
    --l->len;
    return res;
  }
  struct Node *cur = l->head;
  for (int n = 0; n < i-1; ++n, cur = cur->next);
  // After this loop, cur will point at the node before the node I want
  // to remove
  struct Node *toRemove = cur->next;
  cur->next = toRemove->next;
  int res = toRemove->data;
  free(toRemove);
  --l->len;
  return res;
}

int len(struct List *l) {
  return l->len;
}


void tailRecursiveDestroyNodes(struct Node *n) {
  if (!n) return;
  struct Node *next = n->next;
  free(n);
  tailRecursiveDestroyNodes(next);
  // This function is tail recursive, there is no work to be done by
  // the original call after the recursion completes, as such a good compiler
  // may optimize away the additional stackframes.
}

void destroyNodes(struct Node *n) {
  // We'll continue improving this function next class
  if (!n) return; // If n is the null pointer we're done
  destroyNodes(n->next);
  free(n);
  // I do not like this function because it's not tail recursive.
  // The recursive call must return here because we still have work to do
  // i.e. free the original node n.

}

struct List *destroyList3(struct List *l) {
  struct Node *cur = l->head;
  while (cur) {
    struct Node *next = cur->next;
    free(cur);
    cur = next;
  }
  free(l);
}

struct List *destroyList2(struct List *l) {
  tailRecursiveDestroyNodes(l->head);
  free(l);
  return NULL;
}

struct List *destroyList1(struct List *l) {
  // This function cleans up all memory associated with
  // a list that was created with our createList function
  // and manipulated through our provided interface
  // e.g. addToFront and all the other fns we'll write
  destroyNodes(l->head);
  free(l);
  return NULL;
}

int ith(struct List *l, int i) {
  // It is the caller's responsibility to make sure i is within bounds.
  // We add an assertion so they know they messed up.
  assert(i < len(l));
  struct Node *cur;
  int n = 0;
  for (cur = l->head; n < i; ++n, cur = cur->next);
  return cur->data;
}


int main() {
  // Our ADT is meant to be used only through the functions
  // we've povided.
  // i.e. we expect users to create our list with our creatList function
  // we expect them to add to the list with our addToFront function
  // etc. etc.
  // Currently however, the client programmer can do this...
  struct List l;
  l.len = 2;
  struct Node n;
  n.data = 0;
  n.next = NULL;
  struct Node n2;
  n2.data = 1;
  n2.next = &n;
  l.head = &n2;
  addToFront(&l, 2);
  for (int i = 0; i < l.len; ++i)  {
    printf("%d\n", ith(&l, i));
  }
  destroyList3(&l);
  // And our code breaks...
  // Is this our fault, as the designer of the ADT, however?
  // Answer: No! The client programmer broke the rules, they were told
  // they must use our ADT only through the functions we provided, our
  // interface. However, while it's their own fault, it might be nice
  // if we could stop the client programmer from ever even doing this.
  // How can we do that?

}

