// форм-м список без повтор-й с рейтингами и суммарн хар-ками его эл-в
#include <stdio.h> 
#include <string.h> 
#include <stdlib.h> 
int main() { 
 char **Name, **List; float *Sum, *Ch; int* reit; int n, k = 0, i, l, j, t; char tmp[198]; 
 printf("Press n: "); scanf("%d", &n); 
 Name = (char**)malloc(n * sizeof(char*)); Ch = (float*)malloc(n * sizeof(float));  // исх. данные
 reit = (int*)malloc(n * sizeof(int)); List = (char**)malloc(n * sizeof(char*));
 Sum = (float*)malloc(n * sizeof(float)); 
 printf("Press data\n\n"); 
 for (i = 0; i < n; i++) { 
  printf("Press Name: "); scanf("%s", tmp); // считываем tmp (к-й на данный момент Name)
  Name[i] = (char*)malloc((strlen(tmp) + 2)*sizeof(char)); //выделяем память для каждого текущего Name'a (Name[i] - массив символов)
  strcpy(Name[i], tmp); // переносим считанное tmp (к-й на данный момент Name) в только что выделенное для него место
  printf("Press info: "); scanf("%f", &Ch[i]); printf("\n"); // вводим характеристику к namе[i]
 } 
 for (i = 0; i < n; i++) { // для каждого слова массива Name
  l = -1; j = 0; 
  while ((l == -1) && (j < k)) { 
   t = strcmp(List[j], Name[i]); 
   if (t == 0) { l = j; }
   j++; 
  } 
  if (l == -1) { 
   List[k] = (char*)malloc((strlen(Name[i]) + 2) * sizeof(char)); 
   strcpy(List[k], Name[i]); 
   reit[k] = 1; 
   Sum[k++] = Ch[i]; 
  } 
  else { reit[l]++; Sum[l] += Ch[i]; } 
 } 
 printf("\nList without repeat and her data: \n"); for (i = 0; i < k; i++) { printf("%s   %d   %.1f\n", List[i], reit[i], Sum[i]); } 
}
