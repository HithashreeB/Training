//Implement a function that replaces all occurrences of "hte" with "the" and "recieve" with "receive" in a given text.

#include <stdio.h>
#include <string.h>
void replaceWords(char *text) {
    char buffer[1000]; 
    int i = 0, j = 0;  
    while (text[i] != '\0') {
        if (strncmp(&text[i], "hte", 3) == 0) {
            strcpy(&buffer[j], "the"); 
            j += 3; 
            i += 3; 
        }
        else if (strncmp(&text[i], "recieve", 7) == 0) {
            strcpy(&buffer[j], "receive"); 
            j += 7; 
            i += 7; 
        }
        else {
            buffer[j++] = text[i++]; 
        }
    }
    buffer[j] = '\0'; 
    strcpy(text, buffer); 
}
int main() {
    char text[1000]; 
    printf("Enter Text: ");
    fgets(text, sizeof(text), stdin);
    text[strcspn(text, "\n")] = 0;
    replaceWords(text); 
    printf("Updated Text: %s\n", text); 
    return 0;
}
