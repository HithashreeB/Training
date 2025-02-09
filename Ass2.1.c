#include <stdio.h>
#include <ctype.h>
#include <string.h>

int isValidUsername(char *username) {
    if (!isalpha(username[0])) return 0;
    int length = strlen(username);
    if (length < 5 || length > 15) return 0;
    for (int i = 0; username[i]; i++) {
        if (!isalnum(username[i])) return 0;
    }
    return 1;
}

int main() {
    char username[20];
    printf("Enter username: ");
    scanf("%s", username);
    printf(isValidUsername(username) ? "Valid username!\n" : "Invalid username!\n");
    return 0;
}
