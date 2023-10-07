#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selectionSort(int arr[], int n) {
    int i, j, minIndex;

    for (i = 0; i < n - 1; i++) {
        minIndex = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            swap(&arr[i], &arr[minIndex]);
        }
    }
}

int main() {
    int arreglo[5];
    int i;

    printf("Ingrese 5 elementos del arreglo:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &arreglo[i]);
    }

    selectionSort(arreglo, 5);

    printf("Arreglo ordenado:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", arreglo[i]);
    }
    printf("\n");

    return 0;
}
