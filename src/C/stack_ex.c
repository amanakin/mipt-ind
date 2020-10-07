#include <stdio.h>

#include "C/stack.h"
#include "C/log.h"

int main() {
    initLog(stderr);
    Stack stack;
    StackConstruct(&stack, 2);
    StackPush(&stack, 22);
    StackPush(&stack, 22);
    StackPush(&stack, 52223);
    StackPush(&stack, 9823242);
    StackPush(&stack, 124322);
    StackPush(&stack, 122);
    StackPush(&stack, 8626342);

    printf("%lg\n", StackTop(&stack));
    StackPop(&stack);
    StackPop(&stack);
    StackPop(&stack);
    StackPop(&stack);
    StackPop(&stack);

    StackPush(&stack, 1);
    StackDump(&stack);
    double x =  StackTop(&stack);
    printf("%lg", x);

}
//docs
