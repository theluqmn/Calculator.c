#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

int pause(seconds) {
    time_t start_time = time(NULL);
    while (difftime(time(NULL), start_time) < seconds) { // wait for 5 seconds
    }
    return 0;
}

int main() {
    //  First number
    float num1;
    printf("First number? -> ");
    scanf(" %f", &num1);

    if (num1 == (int)num1) {
        printf("\nIs an integer");
        num1 = (int)num1;
    } else {
        printf("\nNot an integer");
    }

    //  Second number
    float num2;
    printf("\nSecond number? -> ");
    scanf(" %f", &num2);

    if (num2 == (int)num2) {
        printf("\nIs an integer");
        num2 = (int)num2;
    } else {
        printf("\nNot an integer");
    }

    system("cls");

    //  Operation
    char operation;
    printf("%f and %f to perform what operation? -> ", num1, num2);
    scanf(" %c", &operation);

    if (operation == '+') {
        //  Addition
        float ans = (num1 + num2);

        if (ans == (int)ans) {
            printf("\nIs an integer");
            ans = (int)ans;
            printf("\nAnswer = %.3f", ans);
        } else {
            printf("\nNot an integer");
            printf("\nAnswer = %.3f", ans);
        }

    } if (operation == '-') {
        //  Subtraction
        float ans = (num1 - num2);

        if (ans == (int)ans) {
            printf("\nIs an integer");
            ans = (int)ans;
            printf("\nAnswer = %.3f", ans);
        } else {
            printf("\nNot an integer");
            printf("\nAnswer = %.3f", ans);
        }

    } if (operation == '*') {
        //  Multiplication
        float ans = (num1 * num2);

        if (ans == (int)ans) {
            printf("\nIs an integer");
            ans = (int)ans;
            printf("\nAnswer = %.3f", ans);
        } else {
            printf("\nNot an integer");
            printf("\nAnswer = %.3f", ans);
        }

    } if (operation == '/') {
        //  Division
        float ans = (num1 / num2);

        if (ans == (int)ans) {
            printf("\nIs an integer");
            ans = (int)ans;
            printf("\nAnswer = %.3f", ans);
        } else {
            printf("\nNot an integer");
            printf("\nAnswer = %.3f", ans);
        }
    }

    return 0;
}