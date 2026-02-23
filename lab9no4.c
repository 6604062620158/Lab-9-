#include <stdio.h>


void swapValue(int *a, int *b, int *c);
void swapArray(int a[], int b[], int size);

int main() {

    // ----------------------------
    // Part 1: swapValue
    // ----------------------------
    int a = 1, b = 2, c = 3 , i;

    printf("Before swapValue: a=%d, b=%d, c=%d\n", a, b, c);

    swapValue(&a, &b, &c);

    printf("After swapValue : a=%d, b=%d, c=%d\n\n", a, b, c);

    // ----------------------------
    // Part 2: swapArray
    // ----------------------------
    int arr1[5] = {1, 2, 3, 4, 5};
    int arr2[5] = {10, 20, 30, 40, 50};
    int size = 5;

    
    printf("Before swapArray:\n");
    printf("arr1 = ");
    for( i = 0; i < size; i++){
	
        printf("%d ", arr1[i]);
}
    printf("\narr2 = ");
    for( i = 0; i < size; i++){
	
        printf("%d ", arr2[i]);
}
    printf("\n\n");

    
    swapArray(arr1, arr2, size);

   
    printf("After swapArray:\n");
    printf("arr1 = ");
    for( i = 0; i < size; i++){
    	printf("%d ", arr1[i]);
	}
        

    printf("\narr2 = ");
    for( i = 0; i < size; i++){
    	 printf("%d ", arr2[i]);
	}
       

    printf("\n");

    return 0;
}

// ----------------------------
// swapValue: c b, b a, a c
// ----------------------------
void swapValue(int *a, int *b, int *c) {
    int tempA = *a;
    int tempB = *b;
    int tempC = *c;

    *b = tempC;
    *a = tempB;
    *c = tempA;
}

// ----------------------------
// swapArray: swap 
// ----------------------------
void swapArray(int a[], int b[], int size) {
    int temp,i;

    for( i = 0; i < size; i++) {
        temp = a[i];
        a[i] = b[i];
        b[i] = temp;
    }
}
