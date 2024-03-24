// поиск минимума в массиве и его индекс (l)
#include <stdio.h>
#include <stdlib.h>
int main () {
    int n, min, l = 0, i; int *A;
    printf("enter quantity\n"); scanf("%d", &n); 
    A = (int*)malloc(n*sizeof(int));
    printf("enter numbers\n");
    for (i=0; i< n; i++) { scanf("%d", &A[i]); }
    min = A[0];
    for (i=0; i< n; i++) { 
        if (A[i] < min) { min = A[i]; l = i; }
    } 
    printf("min = %d, his number = %d", min, l);
}
