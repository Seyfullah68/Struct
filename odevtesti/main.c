#include <stdio.h>

int isSymmetric(int *arr, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (*(arr + i * n + j) != *(arr + j * n + i)) {
                return 0;
            }
        }
    }
    return 1;
}
int isDiag(int *arr, int n){
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if(i==j){
                if (*(arr + i * n + j) == *(arr + j * n + i)) {
                    return 1;
                }
            }
        }
    }
    return 0;
}

int main() {
    int matrix[5][5];
    int i, j;

    printf("5x5 matrix yazýn:\n");
    for (i = 0; i < 5; i++) {
        printf("%d. row\n",i+1);
        for (j = 0; j < 5; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (i = 0; i < 5; i++) {
        printf("\n");
        for (j = 0; j < 5; j++) {
            printf("%d  ", matrix[i][j]);
        }
    }
    printf("\n");

    if (isSymmetric(&matrix[0][0], 5) == 1) {
        printf("matrix symmetric.\n");
    } else {
        printf("matrix not symmetric.\n");
    }
    if (isDiag(&matrix[0][0], 5) == 1) {
        printf("matrix diag.\n");
    } else {
        printf("matrix not diag.\n");
    }

    return 0;
}
