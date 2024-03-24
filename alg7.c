#include <stdio.h> 
#include <string.h> 
#include <stdlib.h> 
int main() { 
 char **name, **list; int* reit; int n, k, i, l, j, t; char tmp[198]; 
 printf("Press n: "); scanf("%d", &n); 
 name = (char**)malloc(n * sizeof(char*)); 
 list = (char**)malloc(n * sizeof(char*)); 
 reit = (int*)malloc(n * sizeof(int)); 
 printf("Press data\n\n"); 
 for (i = 0; i < n; i++) { 
  printf("Press name: "); 
  scanf("%s", tmp); 
  name[i] = (char*)malloc((strlen(tmp) + 2)*sizeof(char)); 
  strcpy(name[i], tmp);
 } 
 k = 0; 
 for (i = 0; i < n; i++) { 
  l = -1; 
  j = 0; 
  while ((l == -1) && (j < k)) { 
   t = strcmp(list[j], name[i]); 
   if (t == 0) { 
    l = j; 
   } 
   j++; 
  } 
  if (l == -1) { 
   list[k] = (char*)malloc((strlen(name[i]) + 2) * sizeof(char)); 
   strcpy(list[k], name[i]); 
   reit[k] = 1; k++;
  } 
  else { 
   reit[l]++;
  } 
 } 
 printf("\nList without repeat and her reit: \n"); 
 for (i = 0; i < k; i++) { 
  printf("%s  %d \n", list[i], reit[i]); 
 } 
}
