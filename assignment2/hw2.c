// name: Nan Chen
// email: chen.nan2@northeastern.edu

#include <stdio.h>   // stardard input/output library
#include <stdbool.h> // standard boolean library: bool, true, false

#define MAXSIZE 100

bool isEmpty (int* s, int t) {
  // returns true if t = -1
    if (s == NULL)
    {
        printf("*** the pointer is null***\n");
        return true;
    }
    if (t < 0)
    {
        return true;
    }
    return false;
}

bool isFull (int* s, int t) {
  // returns true if no more room in the stack
    if (s == NULL)
    {
        printf("*** the pointer is null***\n");
        return true;
    }
    if (t >= MAXSIZE - 1)
    {
        return true;
    }
    return false;
}

void push(int v, int* s, int* tp) {
  // put v onto the top of the stack s unless it is already full
    if (s == NULL || tp == NULL)
    {
        printf("*** the pointer is null***\n");
        return;
    }
    if (!isFull(s, *tp))
    {
        s[++(*tp)] = v;
    }else
    {
        printf("*** attempt to push onto full stack***\n");
    }
    return;
}

int pop (int* s, int* tp) {
  // return the top entry in the stack unless stack is empty
  // update s and *tp -- requires top to be passed by reference!
    if (s == NULL || tp == NULL)
    {
      printf("*** the pointer is null***\n");
      return 0;
    }
    if (!isEmpty(s, *tp))
    {
        return s[(*tp)--];
    }else
    {
        printf("*** attempt to pop empty stack***\n");
        return 0;
    }
}

int main () {

  int stack1[MAXSIZE]; // array in which stack will live
  int top1 = -1;       // top valid location in stack, -1 == empty
  int stack2[MAXSIZE]; // array in which stack will live
  int top2 = -1;       // top valid location in stack, -1 == empty
  
  printf("pushing: 1, 2, 3, 4, 5 onto first stack\n");
  printf("pushing: 100, 200, 300, 400, 500 onto second stack\n\n");
  push(1, stack1, &top1);
  push(2, stack1, &top1);
  push(3, stack1, &top1);
  push(4, stack1, &top1);
  push(5, stack1, &top1);
  push(100, stack2, &top2);
  push(200, stack2, &top2);
  push(300, stack2, &top2);
  push(400, stack2, &top2);
  push(500, stack2, &top2);

  printf("popping alternating stacks:\n");
  printf("1> %d\n",pop(stack1, &top1));
  printf("2> %d\n",pop(stack2, &top2));
  printf("1> %d\n",pop(stack1, &top1));
  printf("2> %d\n",pop(stack2, &top2));
  printf("1> %d\n",pop(stack1, &top1));
  printf("2> %d\n",pop(stack2, &top2));
  printf("1> %d\n",pop(stack1, &top1));
  printf("2> %d\n",pop(stack2, &top2));
  printf("1> %d\n",pop(stack1, &top1));
  printf("2> %d\n",pop(stack2, &top2));
  printf("1> %d\n",pop(stack1, &top1));
  printf("2> %d\n",pop(stack2, &top2));
  return 0;
}
