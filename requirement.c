/*
** EPITECH PROJECT, 2020
** requirememnt
** File description:
** head
*/

#include <stdlib.h>

int my_factrec_synthesis(int nb)
{
    if (nb < 0 || nb > 12)
        return 0;
    if (nb == 0)
        return 1;
    return nb * my_factrec_synthesis(nb - 1);
}

int my_squareroot_synthesis(int nb)
{
    if (nb < 0)
        return -1;
    if (nb == 0)
        return 0;
    for (int a = 1; a * a <= nb; a++)
        if ((a * a) == nb)
            return a;
    return -1;
}