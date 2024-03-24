#include <stdio.h> 
#include <string.h> 
#include <stdlib.h> 
int main() { 
 char **Name, **List; int* Reit; int n, k, i, l, j, t; char tmp[198]; 
 printf("Press n: "); scanf("%d", &n); 
 Name = (char**)malloc(n * sizeof(char*)); List = (char**)malloc(n * sizeof(char*)); Reit = (int*)malloc(n * sizeof(int)); 
 printf("Press data\n\n"); 
 for (i = 0; i < n; i++) { 
  printf("Press Name: "); scanf("%s", tmp); 
  Name[i] = (char*)malloc((strlen(tmp) + 2)*sizeof(char)); 
  strcpy(Name[i], tmp);
 } 
 k = 0; 
 for (i = 0; i < n; i++) { 
  l = -1; 
  j = 0; 
  while ((l == -1) && (j < k)) { 
   t = strcmp(List[j], Name[i]); 
   if (t == 0) { l = j; } 
   j++; } 
  if (l == -1) { 
   List[k] = (char*)malloc((strlen(Name[i]) + 2) * sizeof(char)); 
   strcpy(List[k], Name[i]); 
   Reit[k] = 1; k++;
  } else { Reit[l]++;} 
 } 
 printf("\nList without repeat and her Reit: \n"); for (i = 0; i < k; i++) { printf("%s  %d \n", List[i], Reit[i]); } 
}
