#include <stdio.h>
int main() {
    char str[200];
    int count = 1, i;
    printf("Enter a sentence: ");
    scanf(" %[^\n]", str);
    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] == ' ' && str[i+1] != ' ' && str[i+1] != '\0')
            count++;
    }
    printf("Number of words: %d", count);
    return 0;
}
