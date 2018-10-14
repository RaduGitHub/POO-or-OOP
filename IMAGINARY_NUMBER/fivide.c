#include <stdio.h>
#include "fivide.h"

void divide(float real_1, float imag_1, float real_2, float imag_2){

    float real, imag;

    real = ( (real_1 * real_2) + (imag_1 * imag_2) ) / ( real_1 * real_1 - imag_1 *imag_2 );
    imag = ( (real_2 * imag_1) - (real_1 * imag_2) ) / ( real_1 * real_1 - imag_1 *imag_2 );

    printf("\nReal part after division is: %f", real);
    printf("\nImaginary part after division is: %f", imag);
}
