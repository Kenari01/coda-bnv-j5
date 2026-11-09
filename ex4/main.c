#include <stdlib.h>
#include <stdio.h>
#include "fonction.h"

int main()
{
    double sum1 = compute_average(1,2,3);
    printf("Le resultat est %.1f\n",sum1);

    double sum = add(10,5);
    printf("Le resultat est %.1f\n",sum);

    print_str("hello\n");

    exit(0);
}