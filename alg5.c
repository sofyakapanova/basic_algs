// ищем эл-т (Ctrl) и его индекс (l) в упорядоченном по алф массиве методом "лев в пустыне"
#include "string.h"
#include "stdlib.h"
#include "locale.h"
#include "stdio.h"
int main() {
  setlocale(LC_ALL, "Rus");
  int n, l = -1, i, start = 0, fin, mid, k; char** Name; char*Ctrl; char tmp[100];
  printf("Введите кол-во элементов: "); scanf("%d", &n);
  Name = (char**)malloc(n*sizeof(char*)); 
  printf("Введите список: ");
  for (i = 0; i < n; i++) {
    scanf("%s", tmp);
    Name[i] = (char*)malloc(strlen(tmp) + 2); strcpy(Name[i], tmp);
  }
  printf("Введите искомое название: "); scanf("%s", tmp);
  Ctrl = (char*)malloc((strlen(tmp) + 4)*sizeof(char)); strcpy(Ctrl, tmp);
  fin = n - 1;
  while ((l == -1) && (start <= fin)) {
    mid = (start + fin)/2;  // делим поле поиска на 2 половины (искомое зн-е не мб одновременно в 2 половинах)
    k = strcmp(Name[mid], Ctrl);  // сравниваем с серединным зн-м
    if (k<0) { start = mid + 1; }; // если Name[mid] < Ctrl, то и все остальные перед Name[mid] меньше, т.е ниже смысла искать нет, двигаемся дальше по массиву
    if (k>0) { fin = mid - 1; }; 
    if (k==0) { l = mid; };
  }
  printf("Искомое название нашлось под номером %d", l);
}
