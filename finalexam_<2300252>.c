// JONEIL OLING 2300252
#include <stdio.h>

int main() {
    int studentID, sum = 0, U, i, j;
    
// Step 1: Ask for student ID and calculate U
    printf("Enter your student ID: ");
    scanf("%d", &studentID);
    
    while (studentID > 0) {
        sum += studentID % 10;  // Get last digit and add to sum
        studentID /= 10;        // Remove last digit
    }
    
    U = sum % 5 + 3;
    printf("Your U value is: %d\n", U);
    
// Step 2: Print pattern based on U value
    if (U == 3) {
        // Right-aligned number triangle
        printf("Pattern for U=3:\n");
        for (i = 1; i <= 5; i++) {
            for (j = 1; j <= i; j++) {
                printf("%d", j);
            }
            printf("\n");
        }
    }
    else if (U == 4) {
        // Square number pattern
        printf("Pattern for U=4:\n");
        int num = 1;
        for (i = 1; i <= 4; i++) {
            for (j = 1; j <= 4; j++) {
                printf("%d ", num);
                num++;
            }
            printf("\n");
        }
    }
    else if (U == 5) {
        // Inverted star triangle
        printf("Pattern for U=5:\n");
        for (i = 5; i >= 1; i--) {
            for (j = 1; j <= i; j++) {
                printf("*");
            }
            printf("\n");
        }
    }
    else if (U == 6) {
        // Multiplication table
        int table_num = U + 2;
        printf("Multiplication table for %d (U=6):\n", table_num);
        for (i = 1; i <= 10; i++) {
            printf("%d x %d = %d\n", table_num, i, table_num * i);
        }
    }
    else if (U == 7) {
        // Fibonacci sequence
        printf("First %d Fibonacci numbers (U=7):\n", U * 3);
        int first = 0, second = 1, next;
        for (i = 1; i <= U * 3; i++) {
            if (i == 1) {
                printf("%d ", first);
                continue;
            }
            if (i == 2) {
                printf("%d ", second);
                continue;
            }
            next = first + second;
            printf("%d ", next);
            first = second;
            second = next;
        }
        printf("\n");
    }
    else {
        printf("U value is not between 3-7.\n");
    }
    
    return 0;
}
