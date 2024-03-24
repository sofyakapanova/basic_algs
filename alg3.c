// формирует массив из эл-в другого массива, к-е нач с а
#include <stdio.h>
#include <string.h>   // чтоб использовать ф-ции для строк
#include <stdlib.h>
#include <locale.h>  // чтоб писать на русском 
int main() {
  setlocale(LC_ALL, "Rus");  // чтоб писать на русском 
  int n, i, k = 0; char *Tmp; char **Name, **Best;
  printf("Введи n: "); scanf("%d", &n);
  Tmp = (char*)malloc(100 * sizeof(char)); // Tmp - текущее слово, к-е ввел польз-ль (предполагаем что к-во символов в слове мб макс 100 и выделяем память для этого случая) (слово - массив букв)
  Name = (char**)malloc(n * sizeof(char*)); Best = (char**)malloc(sizeof(Name)); // ** тк мы не знаем ни к-во эл-в массива, ни к-во эл-в в кажд эл-е массива
  printf("Введи список: ");
  for (i = 0; i < n; i++) {
    scanf("%s", Tmp);  // считываем слово, к-е ввел польз-ль
    Name[i] = (char*)malloc((strlen(Tmp) + 1)*sizeof(char));  // выделяем память под все символы текущ слова в массиве Name
    strcpy(Name[i], Tmp);  // копируем слово, к-е ввел польз-ль, в массив Name
  }
  for (i = 0; i < n; i++) {
    if (Name[i][0] == 'a') {
      Best[k] = (char*)malloc(sizeof(Name[i])); strcpy(Best[k], Name[i]);
      k++; }
  }
  printf("Список слов на а: ");
  for (i = 0; i < k; i++) { printf("%s\n", Best[i]); }
  return 0;
}
