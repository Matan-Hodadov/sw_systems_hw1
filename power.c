#include "myMath.h"

int abs (int x)
{
return (x < 0 ? -x : x);
}

double Power(double x, int y)
{
    double base = x;
    int expo = y;
    double result = 1.0;
/* calculations */
    if (expo < 0)
    {
        expo = abs(expo);
        for (expo; expo > 0; expo--)
        {
            result = result * base;
        }
        return 1/result;
    }
    else if (expo == 0)
    {
        return result;
    }
    else 
    {   
        for (expo; expo > 0; expo--)
        {
            result = result * base;
        }
        return result;
    }
}

double Exponent(int x)
{
    Power(E,x);
}