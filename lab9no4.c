#include <stdio.h>


void swapValue(int *a, int *b, int *c);

int main() {
    int a = 1, b = 2, c = 3;

    printf("Before swap function: a=%d, b=%d, c=%d\n", a, b, c);

    swapValue(&a, &b, &c);

    printf("After swap function: a=%d, b=%d, c=%d\n", a, b, c);

    return 0;
}


void swapValue(int *a, int *b, int *c) {
    int tempA = *a;   
    int tempB = *b;   
    int tempC = *c;   

    *b = tempC;   
    *a = tempB;   
    *c = tempA;   
}

