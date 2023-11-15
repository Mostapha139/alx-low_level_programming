#include "main.h"

/**
 * pow_recursion - Calculate the power of a number recursively.
 * @x: the base number
 * @y: the exponent
 * Return: the result of x^y
 */
int pow_recursion(int x, int y)
{
    if (y < 0)
        return (-1);
    else if (y == 0)
        return (1);
    else
        return (x * pow_recursion(x, (y - 1)));
}
