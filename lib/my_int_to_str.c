/*
** EPITECH PROJECT, 2019
** int_to_str
** File description:
** void
*/

#include <stdlib.h>

static int poww3(int x, int n);

char *my_int_to_str(int nb)
{
    int i = 0;
    char *s;
    int j = 0;

    while (nb / poww3(10, i) >= 10) {
        i++;
    }
    s = malloc(sizeof(char) * (i + 1));
    while (i >= 0) {
        s[j] = ((nb / poww3(10, i)) % 10) + '0';
        i--;
        j++;
    }
    s[j] = '\0';
    return s;
}
static int poww3(int x, int n)
{
    if (n == 0)
        return (1);
    else
        return (x * poww3(x, n-1));
}
