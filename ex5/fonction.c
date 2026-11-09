#include <stdio.h>
double compute_average(double nb1, double nb2, double nb3)
{

    double result = (nb1+nb2+nb3) / 3;

    return(result);

}

int add(int nb1, int nb2)
{
    int result = (nb1 + nb2);
    

    return(result);
}

void print_str(char *str)
{
    printf("%s",str);
}