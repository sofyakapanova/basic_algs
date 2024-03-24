#include <stdio.h> 
#include <string.h> 
#include <stdlib.h> 
int main() { 
 char **Name, **List; int n, k, i, l, j, t; char tmp[198]; 
 printf("Press n: "); scanf("%d", &n); 
 Name = (char**)malloc(n * sizeof(char*)); List = (char**)malloc(n * sizeof(char*)); 
 printf("Press data\n\n"); 
 for (i = 0; i < n; i++) { 
  printf("Press Name: "); scanf("%s", tmp); 
  Name[i] = (char*)malloc((strlen(tmp) + 2)*sizeof(char)); 
  strcpy(Name[i], tmp);
 } 
 k = 0; 
 for (i = 0; i < n; i++) { // для каждого из Name
  l = -1; j = 0; 
  while ((l == -1) && (j < k)) { 
   t = strcmp(List[j], Name[i]); // = 0 if совп.
   if (t == 0) { l = j; } // if совп. то меняем флаг (обозначаем что нашли Name[i] в List)
   j++; } // перебираем дальше
  if (l == -1) { // if не нашли Name[i] в List
   List[k] = (char*)malloc((strlen(Name[i]) + 2) * sizeof(char)); 
   strcpy(List[k], Name[i]); // добавляем его в List
   k++; } // увел. число эл-в в List
 } 
 printf("\nList without repeats and her data: \n"); for (i = 0; i < k; i++) { printf("%s \n", List[i]); } 
}
