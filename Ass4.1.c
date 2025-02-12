#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isValidIPv4(char *ip) {
    char *token = strtok(ip, ".");
    int num, count = 0;
    while (token) {
        if (sscanf(token, "%d", &num) != 1 || num < 0 || num > 255) return 0;
        if (token[0] == '0' && token[1] != '\0') return 0;
        count++;
        token = strtok(NULL, ".");
    }
    return count == 4;
}

int main() {
    char ip[50];
    printf("Enter IP: ");
    scanf("%s", ip);
    printf(isValidIPv4(ip) ? "Valid\n" : "Invalid\n");
    return 0;
}
