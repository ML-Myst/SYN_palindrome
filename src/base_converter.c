/*
** EPITECH PROJECT, 2020
** palindrome
** File description:
** base
*/

#include "palin.h"

char reVal(int num)
{
    if (num >= 0 && num <= 9)
        return (char)(num + '0');
}

char *d_to_b(int base, int nb, char *res)
{
    int x = 0;

    while (nb > 0)
    {
        res[x++] = reVal(nb % base);
        nb /= base;
    }
    res[x] = '\0';
    res = my_strdup(res);
    return my_revstr(res);
}

int val(char c)
{
    if (c >= '0' && c <= '9')
        return (int)c - '0';
}

int b_to_d(char *str, int base)
{
    int len = my_strlen(str);
    int power = 1;
    int num = 0;
    int i;

    for (i = len - 1; i >= 0; i--)
    {
        num += val(str[i]) * power;
        power = power * base;
    }

    return num;
}
