#include "main.h"
#include <stdio.h>
/**
*_strlen_recursion - returns the length of a string recursively
*@s: the string to find the length of
*Return: the length of the string
*/
int _strlen_recursion(char *s)
{
if (*s == '\0')
return (0);
else
return (_strlen_recursion(s + 1) + 1);
}
