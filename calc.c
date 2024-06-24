#include <stdio.h>
#include <stdlib.h>

// read argv's of numbers (int type), scanf operator (char type)

int main(int argc, char *argv[]) { 
    int result;
    char op;

    if (argc < 2) {
        printf("not enough args");
        return 1;
    }

    printf("choose your operation, +, -, *, or /. Press x to exit: ");

    scanf("%c", &op);

    //works as intended
    if (op == 'x') {
        exit(0);
    }

    switch (op) {
        case '+':
            result = 0;
            for(int i = 1; i<argc; i++) {
                result += atoi(argv[i]);
            }
            break;
        
        case '-':
            result = atoi(argv[1]);
            for(int i = 2; i<argc; i++) {
                result -= atoi(argv[i]); 
            }
            break;
        
        case '*':
            result = 1;
            for(int i = 1; i<argc; i++) {
                result *= atoi(argv[i]); 
            }
            break;
        
        case '/':
            result = atoi(argv[1]);
            for(int i = 1; i<argc; i++) {
                if (atoi(argv[i]) == 0) {
                    printf("Division by 0 error");
                    return 1;
                }
                result /= atoi(argv[i]); 
            } 
            break;
        default:
            printf("invalid operator\n");
            return 1;
    }

    printf("Result: %d\n", result);
    return 0;
}