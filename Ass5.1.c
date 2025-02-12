//Design a stack that supports push, pop, top, and retrieving the minimum element in constant time.

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#define MAX 1000  

typedef struct {
    int data[MAX];  
    int minData[MAX]; 
    int top;  
} MinStack;

MinStack* createStack() {
    MinStack* s = (MinStack*)malloc(sizeof(MinStack));
    s->top = -1;
    return s;
}

void push(MinStack* s, int val) {
    if (s->top == MAX - 1) return;
    s->data[++s->top] = val;
    s->minData[s->top] = (s->top == 0) ? val : (val < s->minData[s->top - 1] ? val : s->minData[s->top - 1]);
}

void pop(MinStack* s) { if (s->top >= 0) s->top--; }

int top(MinStack* s) { return (s->top >= 0) ? s->data[s->top] : INT_MIN; }

int getMin(MinStack* s) { return (s->top >= 0) ? s->minData[s->top] : INT_MIN; }

void freeStack(MinStack* s) { free(s); }

int main() {
    MinStack* s = createStack();
    push(s, -2); push(s, 0); push(s, -3);
    printf("Min: %d\n", getMin(s)); // -3
    pop(s);
    printf("Top: %d\n", top(s));    // 0
    printf("Min: %d\n", getMin(s)); // -2
    freeStack(s);
    return 0;
}
