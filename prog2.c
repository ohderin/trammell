#include <stdlib.h>  
#include <stdio.h>      
#include <stdlib.h>

int main (int argc, char * argv[]) {
    int x, y, result;
    char joe; 

    if (argc != 4) {
        printf("\nUsage: %s <num> <operator> <num>\n", argv[0]);
            exit(EXIT_FAILURE);
        }

        x = atoi(argv[1]);
        y = atoi(argv[3]);
        joe = argv[2][0];

        switch (joe) {
            case '+':
                result = x + y;
                break;
            case '-':
                result = x - y;
                break;
            case 'x':
                result = x * y;
                break;
            case '/':
                if (y == 0) {
                   printf("Error: Division by zero is undefined. Try using a non zero value.");
                   exit(EXIT_FAILURE);
                }
                result = x / y;
                break;
            default:
                printf("Usage: %s <num> <operator> <num>\n", argv[0]);
                exit(EXIT_FAILURE);
        }

        printf("%d %c %d = %d\n", x, joe, y, result);
        exit(EXIT_SUCCESS);
}