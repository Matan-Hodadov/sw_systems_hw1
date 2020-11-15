#include <stdio.h>
#include "myMath.h"
int main()
{
    double x;
    printf("Please enter a real number "); 
    scanf("%lf", &x);
    int y = x;

    double res1 = (sub(add(Exponent(y),Power(x,3)), 2));
    printf("the value of f(x) = e^x + x^3 - 2 with x = %lf is: %lf \n", x, res1);

    double res2 = add((mul(x,3)) , mul(Power(x,2), 2));
    printf("the value of f(x) = 3x + 2X^2 with x = %lf is: %lf \n", x, res2);

    double res3 = sub(div(mul(Power(x,3), 4), 5), (mul(x,2)));
    printf("the value of f(x) = (4x^3)/5 -2x with x = %lf is: %lf \n", x, res3);

    return 0;
}
