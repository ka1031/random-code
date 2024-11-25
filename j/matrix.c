#include <stdio.h>

#define SIZE 3

int main(void) {
    int a[SIZE][SIZE], b[SIZE][SIZE], c[SIZE][SIZE] = {0};  

    
    printf("Enter the elements of the first 3x3 matrix:\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    
    printf("Enter the elements of the second 3x3 matrix:\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            scanf("%d", &b[i][j]);
        }
    }

   
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            for (int k = 0; k < SIZE; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    
    printf("The resulting matrix after multiplication is:\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}

    