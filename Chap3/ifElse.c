/*  Jack OToole 2026
    : if else examples
*/

#include <stdio.h>

int main() {
    //simple if else statement
    int x = 10;
    if (x > 5) {
        printf("x is greater than 5\n");
    } else {
        printf("x is not greater than 5\n");
    }

    // multi  else if statement
    int y = 15; 
    if (y > 10) {
        printf("y is greater than 10\n");
    } else if (y == 10) {
        printf("y is equal to 10\n");
    } else {
        printf("y is less than 10\n");
    }   
    return 0;
}