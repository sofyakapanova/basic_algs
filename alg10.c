#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h> 
#include <string.h> 
#include <stdlib.h> 
#include <locale.h> 
int main() { 
    char str[200], zn[] = " ,.!?;"; char** w; int k; 
    setlocale(LC_ALL, "ru"); 
    printf("Введи строчку:\n"); fgets(str, 200, stdin); 
    strcat(str, " ");  //str + ''
    w = calloc(strlen(str), sizeof(char*)); (k) = 0; 
    char tmp[200] = { 0 };  //делаем tmp пустым множеством
    strcpy(tmp, "");
    for (int i = 0; i < strlen(str); i++) { // для каждого символа строки
        if (strchr(zn, str[i]) == 0) // если текущий (итый) символ не знак препинания
        { strncat(tmp, &str[i], 1); } // добавялем его к tmp (форм-м текущее слово)
        else { // если текущ символ знак препинания
            if (strlen(tmp) != 0) {  // если в tmp до этого что-то лежало (пока не уперлись в знак преп-я)
                w[(k)] = calloc(strlen(tmp) + 1, sizeof(char)); 
                strcpy(w[(k)], tmp);  //добавялем в массив-ответ то что лежало в tmp (слово)
                strcpy(tmp, "");  // очищаем tmp (делаем пустым)
                (k)++; } // увеличиваем индекс массива-ответа
            if (str[i] != ' ') { // если текущий символ не пробел 
                w[(k)] = calloc(2, sizeof(char)); 
                strncat(w[(k)], &str[i], 1);  // добавляем в массив-ответ 
                (k)++; } 
        } 
    } 
    printf("Слова:\n"); for (int i = 0; i < k; i++) { printf("%s\n", w[i]); }
}
