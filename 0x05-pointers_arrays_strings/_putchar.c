#include <unistd.h>
/**
* _putchar - writes the character c to stdout
* @c: The char to print
* Return: 1 els -1
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}
