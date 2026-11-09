#include <stdlib.h>
#include <stdio.h>

double compute_average(double nb1, double nb2, double nb3)
{

    double result = (nb1+nb2+nb3) / 3;

    return(result);

}
int main()
{
    double sum = compute_average(1,2,3);
    printf("Le resultat est %.1f\n",sum);

    exit(0);
}