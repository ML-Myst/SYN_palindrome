/*
** EPITECH PROJECT, 2019
** my_convert_num
** File description:
** convert number into ...
*/

#include "palin.h"

char *sum_of_b(char *number, pa_t pa, char *rev)
{
    int nb;
    char *new;

    nb = b_to_d(number, pa.f_d);
    nb += b_to_d(rev, pa.f_d);
    new = d_to_b(pa.f_d, nb, pa.res);
    return new;
}
