#include "main.h"
/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: base number
 * @y: power number
 * Return: result of x raised to the power of y, -1 if y is negative
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
if (y == 0)
return (1);
if (y == 1)
return (x);
return (x * _pow_recursion(x, y - 1));
}
