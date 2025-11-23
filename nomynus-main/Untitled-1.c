#include <stdio.h>

int main() {
    for (int i = 1; i <= 7; i++) { // Loop for each row
        for (int j = 1; j <= i; j++) { // Loop for each column
            printf("*");
        }
        printf("\n"); // New line after each row
    }
    return 0;
}
