#include <stdio.h>

void countChar(char* str, char c, int* count);

int main() {
    char str[100];
    char c;
    int count = 0;

    printf("Zadejte retezec:\n");
    fgets(str, sizeof(str), stdin);

    printf("Zadejte hledany znak: ");
    scanf("%c", &c);

    countChar(str, c, &count);

    printf("Znak '%c' se v retezci vyskytuje %d krat.\n", c, count);

    return 0;
}

void countChar(char* str, char c, int* count) {
    *count = 0;
    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] == c) {
            (*count)++;
        }
    }
}