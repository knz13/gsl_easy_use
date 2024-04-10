
#include "gsl/gsl_matrix.h"
#include "gsl/gsl_block_int.h"

int main(
    int argc,
    char **argv)
{

    gsl_block_int *b = gsl_block_int_alloc(100);

    printf("Hello, World!\n");

    return 0;
}