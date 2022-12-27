#include <stdio.h>
#include <math.h>

#define EPSILON 1e-15  // precisão desejada

double cbrt_newton (double x, double guess)
{
    // itera até atingir a precisão desejada
    while (fabs (guess - x / (guess * guess)) > EPSILON)
    {
        guess = (2 * guess + x / (guess * guess)) / 3;
    }
    return guess;
}

int main (void)
{
    double x = 8;
    double raiz_cubica = cbrt_newton (x, 1.0); // aproximação inicial é 1
    printf ("A raiz cúbica de %f é %f\n", x, raiz_cubica);
}

