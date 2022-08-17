#include <stdio.h>
#include <string.h>

int main() {
    printf("Welcome\n");

    int running = 1;
    while (running) {
        printf("Please choose a choice: ");
        char choice[20];
        scanf("%19s", choice);
        fflush(stdin);

        if (strcmp(choice, "quit") == 0) {
            running = 0;
            printf("Quitting");
        } else {
            printf("Invalid command: %s\n", choice);
        }
    }
}