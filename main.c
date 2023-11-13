#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry any point
 * Return: Always 0
 */
int main(void)
{
    int leno;
    int lent;
    unsigned int uin;
    void *addrr;

    leno = my_printf("Let's try to printf a simple sentence.\n");
    lent = printf("Let's try to printf a simple sentence.\n");
    uin = (unsigned int)INT_MAX + 1024;
    addrr = (void *)0x7ffe637541f0;
    my_printf("Length:[%d, %i]\n", leno, leno);
    printf("Length:[%d, %i]\n", lent, lent);
    my_printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    my_printf("Unsigned:[%u]\n", uin);
    printf("Unsigned:[%u]\n", uin);
    my_printf("Unsigned octal:[%o]\n", uin);
    printf("Unsigned octal:[%o]\n", uin);
    my_printf("Unsigned hexadecimal:[%x, %X]\n", uin, uin);
    printf("Unsigned hexadecimal:[%x, %X]\n", uin, uin);
    my_printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    my_printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    my_printf("Address:[%p]\n", addrr);
    printf("Address:[%p]\n", addrr);
    leno = my_printf("Percent:[%%]\n");
    lent = printf("Percent:[%%]\n");
    my_printf("Len:[%d]\n", leno);
    printf("Len:[%d]\n", lent);
    my_printf("Unknown:[%r]\n");
    printf("Unknown:[%r]\n");
    return (0);
}
