#include <stdio.h>
#define NMAX 10

// functions prototype
void inputArray(int array[], int N);
void showArray2D(int matrix[][10], int N);
void constructMatrix(int P[][10], int N, int A[], int B[]);

int main() {  
    int a[NMAX], b[NMAX], p[NMAX][NMAX], n;
   
    printf("Enter N = ");      
    scanf("%d", &n);
    
    printf("Input array A \n");   
    inputArray(a, n);
    
    printf("Input array B \n");
    inputArray(b, n);
    
    constructMatrix(p, n, a, b);
    
    printf("Matrix P \n");
    showArray2D(p, n);   
    
    return 0;
}

// 1. ฟังก์ชันสำหรับรับค่าข้อมูลลงใน Array 1 มิติ
void inputArray(int array[], int N) {
    printf("Enter %d integers: ", N); // แก้ไขช่องว่างหลังเครื่องหมาย %
    for (int i = 0; i < N; i++) {
        scanf("%d", &array[i]);
    }
}

// 2. ฟังก์ชันสำหรับคำนวณและสร้าง Matrix P จาก A และ B
// ตรรกะ: P[i][j] = A[row] * B[column]
void constructMatrix(int P[][10], int N, int A[], int B[]) {
    for (int i = 0; i < N; i++) {         // วนลูปตามแถว (Row) โดยใช้ค่าจาก A
        for (int j = 0; j < N; j++) {     // วนลูปตามคอลัมน์ (Col) โดยใช้ค่าจาก B
            P[i][j] = A[i] * B[j];
        }
    }
}

// 3. ฟังก์ชันสำหรับแสดงผล Matrix แบบ 2 มิติ
void showArray2D(int matrix[][10], int N) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d\t", matrix[i][j]); 
        }
        printf("\n"); 
    }
}