#include <unistd.h>

/**
 * _putchar - Wites the character c to stdout
 *
 * @c: The character to print
 *
 * Return: Return 1 on Success
 * On Erro, Return -1 and errno is set appropiately
 */
int _putchar(char c)
{
        return (write(1, &c, 1));
}
