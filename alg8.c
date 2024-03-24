#include <stdio.h> 
#include <string.h> 
#include <stdlib.h> 
int main() { 
 char **Name, **List; float *Sum, *Ch; int n, k, i, l, j, t; char tmp[198]; //Ch - массив содерж хар-ку кажд из Name, Sum - массив содерж суммарн хар-ку кажд из Name
 printf("Press n: "); scanf("%d", &n); 
 Name = (char**)malloc(n * sizeof(char*)); List = (char**)malloc(n * sizeof(char*));
 Ch = (float*)malloc(n * sizeof(float)); Sum = (float*)malloc(n * sizeof(float)); 
 printf("Press data\n\n"); 
 for (i = 0; i < n; i++) { 
  printf("Press Name: "); scanf("%s", tmp); 
  Name[i] = (char*)malloc((strlen(tmp) + 2)*sizeof(char)); 
  strcpy(Name[i], tmp); 
  printf("Press info: "); scanf("%f", &Ch[i]); printf("\n"); 
 } 
 k = 0; 
 for (i = 0; i < n; i++) { 
  l = -1; j = 0; 
  while ((l == -1) && (j < k)) { 
   t = strcmp(List[j], Name[i]); 
   if (t == 0) { l = j; } // l = номер под к-м Name[i] уже встр в List
   j++; } 
  if (l == -1) { // if не нашли Name[i] в List
   List[k] = (char*)malloc((strlen(Name[i]) + 2) * sizeof(char)); 
   strcpy(List[k], Name[i]); // добавл его в List => на 1 эл больше в Sum => 
   Sum[k++] = Ch[i]; // доб в него хар-ку текущ эл
  } else { Sum[l] += Ch[i]; } // if нашли Name[i] в List: Sum[l] + хар-кa текущ эл
 } 
 printf("\nList without repeat and her ch: \n"); for (i = 0; i < k; i++) { printf("%s    %.1f\n", List[i], Sum[i]); } 
}
