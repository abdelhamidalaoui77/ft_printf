
#include "ft_printf.h"
#include <stdio.h>

int main(void)
{
	
    int r1, r2;
    int a = 42;
    int *ptr = &a;

    // printf("========== CHAR ==========\n");
    // r1 = printf("printf   : %c %c %c\n", 'A', 'Z', '0');
    // r2 = ft_printf("ft_printf: %c %c %c\n", 'A', 'Z', '0');
    // printf("return printf=%d | ft_printf=%d\n\n", r1, r2);

    // printf("========== STRING ==========\n");
    // r1 = printf("printf   : %s | %s | %s\n", "Hello", "", NULL);
    // r2 = ft_printf("ft_printf: %s | %s | %s\n", "Hello", "", NULL);
    // printf("return printf=%d | ft_printf=%d\n\n", r1, r2);

    // printf("========== POINTER ==========\n");
    // r1 = printf("printf   : %p | %p\n", ptr, NULL);
    // r2 = ft_printf("ft_printf: %p | %p\n", ptr, NULL);
    // printf("return printf=%d | ft_printf=%d\n\n", r1, r2);

    // printf("========== SIGNED INTS ==========\n");
    // r1 = printf("printf   : %d | %i | %d\n", -42, 0, 2147483647);
    // r2 = ft_printf("ft_printf: %d | %i | %d\n", -42, 0, 2147483647);
    // printf("return printf=%d | ft_printf=%d\n\n", r1, r2);

    // printf("========== UNSIGNED ==========\n");
    // r1 = printf("printf   : %u | %u\n", 0U, 4294967295U);
    // r2 = ft_printf("ft_printf: %u | %u\n", 0U, 4294967295U);
    // printf("return printf=%d | ft_printf=%d\n\n", r1, r2);

    // printf("========== HEX (lower) ==========\n");
    // r1 = printf("printf   : %x %x %x\n", 0, 255, 4096);
    // r2 = ft_printf("ft_printf: %x %x %x\n", 0, 255, 4096);
    // printf("return printf=%d | ft_printf=%d\n\n", r1, r2);

    // printf("========== HEX (upper) ==========\n");
    // r1 = printf("printf   : %X %X %X\n", 0, 255, 4096);
    // r2 = ft_printf("ft_printf: %X %X %X\n", 0, 255, 4096);
    // printf("return printf=%d | ft_printf=%d\n\n", r1, r2);

    // printf("========== PERCENT ==========\n");
    // r1 = printf("printf   : %% %% %%\n");
    // r2 = ft_printf("ft_printf: %% %% %%\n");
    // printf("return printf=%d | ft_printf=%d\n\n", r1, r2);

    // printf("========== EMPTY STRING ==========\n");
    // r1 = printf("printf   : ''\n");
    // r2 = ft_printf("ft_printf: ''\n");
    // printf("return printf=%d | ft_printf=%d\n\n", r1, r2);

    // printf("========== ONLY %% AT END ==========\n");
    // r1 = printf("printf   : Hello%%\n");   // undefined behavior but harmless
    // r2 = ft_printf("ft_printf: Hello%%\n");
    // printf("return printf=%d | ft_printf=%d\n\n", r1, r2);

    // printf("========== INVALID SPECIFIERS ==========\n");
    // r1 = printf("printf   : %f %_ %!\n");
    // r2 = ft_printf("ft_printf: %f %_ %!\n");
    // printf("return printf=%d | ft_printf=%d\n\n", r1, r2);
    // return 0;
}