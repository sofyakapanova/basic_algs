// линейно ищем эл-т (Ctrl) и его индекс (l) в упорядоченном по алф массиве 
#include "string.h"
#include "stdlib.h"
#include "locale.h"
#include <stdio.h>
int main() {
  setlocale(LC_ALL, "Rus");
  int n, l = -1, i = 0, k; char** Name; char* Ctrl; char tmp[200];
  printf("Введите к-во эл-в: "); scanf("%d", &n);
  Name = (char**)malloc(n*sizeof(char*));
  printf("Введите список: ");
  for (i = 0; i < n; i++) {
    scanf("%s", tmp);
    Name[i] = (char*)malloc(strlen(tmp) + 2); strcpy(Name[i], tmp);
  }
  printf("Введите искомое название: "); scanf("%s", tmp);
  Ctrl = (char*)malloc((strlen(tmp) + 4)*sizeof(char)); strcpy(Ctrl, tmp);
  while ((l == -1) && (i < n)) {  // пока не нашли индекс и есть эл-ты
    k = strcmp(Name[i], Ctrl);  // сравниваем
    if (k == 0) { l = i; }  // если Name[i] == искомое
    i++;
  }
  printf("Искомое название нашлось под номером %d", l);
}
