#include <stdlib.h>
#include <stdio.h>

int add(int nb1, int nb2)
{
    double result = (nb1 + nb2);
    

    return(result);
}
int main()
{
    double sum = add(10,5);
    printf("Le resultat est %.1f\n",sum);

    exit(0);
}