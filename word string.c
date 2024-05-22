#include <stdio.h>
#include <string.h>

int main() {
    char word[100]; // Assuming the maximum length of the word is 100 characters
    int m, n;

    // Input the word and values of m and n
    printf("Enter the word string: ");
    scanf("%s", word);
    printf("Enter the value of m (less than the length of the string): ");
    scanf("%d", &m);
    printf("Enter the value of n (less than the length of the string): ");
    scanf("%d", &n);

    int len = strlen(word);
    int turns = 0;

    while (1) {
        // Harry's turn
        char temp[100];
        strcpy(temp, word + len - m);
        strcat(temp, word);
        temp[len] = '\0';
        strcpy(word, temp);

        // Check if the original word is obtained
        if (strcmp(word, word + len - m) == 0) {
            break;
        }

        turns++;

        // Potter's turn
        strcpy(temp, word + len - n);
        strcat(temp, word);
        temp[len] = '\0';
        strcpy(word, temp);

        // Check if the original word is obtained
        if (strcmp(word, word + len - n) == 0) {
            break;
        }

        turns++;
    }

    printf("Number of turns to get the original word back: %d\n", turns);

    return 0;
}
