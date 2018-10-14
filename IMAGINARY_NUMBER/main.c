#include <stdio.h>
#include <stdlib.h>
#include "divide.h"

int main(){

    struct comp no1, no2;

    printf("Real part first number: ");
    scanf("%f", &no1.real);
    printf("\nImaginary part first number: ");
    scanf("%f", &no1.imaginary);

    printf("\nReal part second number: ");
    scanf("%f", &no2.real);
    printf("\nImaginary part second number: ");
    scanf("%f", &no2.imaginary);

    divide(no1.real, no1.imaginary, no2.real, no2.imaginary);

    return 0;
}
