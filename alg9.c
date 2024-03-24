#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>  
#include <string.h>  
#include <stdlib.h>  
int main() { 
    char st[255]; char t[255]; char** W; char pr[2] = " \0"; int k, pos, i; 
    printf("Enter string: "); fgets(st, 255, stdin); 
    W = (char**)malloc((strlen(st) + 200) * sizeof(char*)); 
    k = 0; 
    strcpy(t, st); strcat(t, pr); // strcat склеивает
    while (strlen(t) > 0) { 
        pos = strchr(t, ' ') - t; // strchr - поиск 1 вхож-я пробела
        if (pos > 0) { 
            W[k] = (char*)malloc((pos + 200) * sizeof(char)); 
            strcpy(W[k], t, pos); 
            W[k++][pos] = ' \0'; } 
        strcpy(t, t + 1 + pos); 
    } 
    printf("Words in string:\n"); for (i = 0; i < k; ++i) { printf("%d. %s\n", i + 1, W[i]); } 
}
