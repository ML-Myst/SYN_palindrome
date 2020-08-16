/*
** EPITECH PROJECT, 2020
** padrome
** File description:
** return a padrome number
*/

#include "palin.h"

int verrify_palindrome(char *nb)
{
    char *reversed = my_revstr(my_strdup(nb));
    static int count = 0;

    count++;
    if (my_strcmp(nb, reversed) != 0)
        return -1;
    return count;
}

pa_t reverse_number(char *nb, pa_t pa)
{
    char *rev = my_revstr(my_strdup(nb));

    pa.nb = sum_of_b(nb, pa, rev);
    pa.count = verrify_palindrome(my_strdup(pa.nb));
    if (pa.count > 10) {
        pa.error = -1;
        return pa;
    }
    if (pa.count != -1)
        return pa;
    else
        return reverse_number(pa.nb, pa);
}

void init_struct(pa_t *pa)
{
    pa->f_n = 0;
    pa->f_p = 0;
    pa->f_d = 10;
    pa->f_imax = 100;
    pa->f_imin = 0;
    pa->count = 0;
    pa->nb = 0;
    pa->memory = 0;
    pa->error = 0;
}

int main(int ac, char **av)
{
    pa_t pa;

    init_struct(&pa);
    if (ac == 2 && my_strcmp("-h", av[1]) == 0)
        my_printf(HELP);
    else if (ac < 3 || ac == 4 || ac == 6 || ac == 8 || ac > 9) {
        my_printf("invalid argument\n");
        return 84;
    }
    if (flags(ac, av, &pa) == 84) {
        my_printf("invalid argument\n");
        return 84;
    }
    if (ac >= 3 && pa.f_n != 0)
        n_option(av[2], pa);
    else if (ac >= 3 && pa.f_p != 0)
        p_option(av[2], pa);
    return 0;
}