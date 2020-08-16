/*
** EPITECH PROJECT, 2020
** palindrome
** File description:
** head
*/

#include "palin.h"

int verrify_flags(pa_t *pa)
{
    if (pa->f_imax < 0)
        return 84;
    if (pa->f_imin < 0)
        return 84;
    if (pa->f_imax < pa->f_imin)
        return 84;
    if (pa->f_d > 10 && pa->f_d < 1)
        return 84;
    if (pa->f_p != 0 && pa->f_n != 0)
        return 84;
    if (pa->f_p != 0 && verrify_palindrome(d_to_b(pa->f_d, pa->f_p, pa->res)) \
    == -1)
        return 84;
    return 0;
}
/* test ./padrome -n 10 -p, it segfault && -p 363r work too ||
if (pa->f_p != 0 && verrify_palindrome(my_int_to_str(b_to_d(my_int_to_s\
tr(pa->f_p), pa->f_d))) == -1)
my_printf("-p in b = %i\n", b_to_d(my_int_to_str(pa->f_p), pa->f_d));
return 84;*/

int get_flags(char **flag, int pos, pa_t *pa)
{
    if (my_strcmp("-n", flag[pos]) == 0)
        pa->f_n = my_getnbr(flag[pos +1]);
    if (my_strcmp("-p", flag[pos]) == 0)
        pa->f_p = my_getnbr(flag[pos +1]);
    if (my_strcmp("-b", flag[pos]) == 0 && my_getnbr(flag[pos + 1]) >= 0)
        pa->f_d = my_getnbr(flag[pos + 1]);
    if (my_strcmp("-imin", flag[pos]) == 0 && my_getnbr(flag[pos + 1]) >= 0)
        pa->f_imin = my_getnbr(flag[pos + 1]);
    if (my_strcmp("-imax", flag[pos]) == 0 && my_getnbr(flag[pos + 1]) >= 0)
        pa->f_imax = my_getnbr(flag[pos + 1]);
}

int flags(int ac, char **av, pa_t *pa)
{
    for (int x = 1; av[x]; x++) {
        get_flags(av, x, pa);
    }
    if (verrify_flags(pa) == 84)
        return 84;
}