#include <stdio.h>

int main() {
    char word[100];
    
    printf("Enter a word: ");
    scanf("%s", word);
    
    if (word[0] != '\0') {
        printf("Abbreviation: %c.\n", word[0]);
    } else {
        printf("Please enter a valid word.\n");
    }
    
    return 0;
}
