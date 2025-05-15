#include <stdio.h>

int main() {
    int number;
    int i;

    printf("Enter a number: ");
    scanf("%d", &number);

    i = 1;
    while (i <= number) {
        if (i % 2 != 0) {
            printf("%d\n", i);
        }
        i++;
    }

    return 0;
}
