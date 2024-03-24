// вычисление суммы эл-тов массива
#include <stdio.h>  // для ввода-вывода
#include <stdlib.h>  // для malloc
int main () {
    int n, summ = 0, i; int *A;
    printf("enter quantity\n"); scanf("%d", &n);  // считываем к-во эл-в, к-е будет в массиве
    A = (int*)malloc(n*sizeof(int));  // выделяем память  для массива (n = к-во ячеек памяти, sizeof(int) = сколько памяти надо для интового зн-я (ск памяти будет в одной ячейке))
    printf("enter numbers\n");
    for (i=0; i< n; i++) { scanf("%d", &A[i]); }  // считываем эл-ты массива
    for (i=0; i< n; i++) { summ += A[i]; } 
    printf("summa = %d", summ);
}
