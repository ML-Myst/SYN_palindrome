/*
** EPITECH PROJECT, 2020
** palindrome.c
** File description:
** head
*/

#include "palin.h"

pa_t find_palindrome(int goal, int number, pa_t pa)
{
    pa = reverse_number(pa.nb, pa);
    if ((pa.count - pa.memory) > 10) {
        pa.memory = pa.count;
        return pa;
    }
    if (my_getnbr(pa.nb) < goal)
        return find_palindrome(goal, number, pa);
    else if (my_getnbr(pa.nb) == goal) {
        pa.count -= pa.memory;
        if (pa.count <= pa.f_imax && pa.count >= pa.f_imin)
            my_printf("%i leads to %i in %i iteration(s) in base %i\n", \
            number, pa.f_p, pa.count, pa.f_d);
    }
    pa.memory = pa.count;
    return pa;
}

int p_option(char *nb, pa_t pa)
{
    int goal = my_getnbr(nb);
    int b_goal = my_getnbr(d_to_b(pa.f_d, goal, pa.res));
    int number;

    for (int i = 1; i <= goal; i++) {
        pa.nb = d_to_b(pa.f_d, i, pa.res);
        number = i;
        pa = find_palindrome(b_goal, number, pa);
    }
    if (pa.f_imin == 0)
        my_printf("%i leads to %i in 0 iteration(s) in base %i\n", goal, goal, \
        pa.f_d);
    return 0;
}

void n_print(char *num, pa_t pa, int decimal)
{
    if (pa.count -1 <= pa.f_imax && pa.count - 1 >= pa.f_imin)
        my_printf("%s leads to %i in %i iteration(s) in base %i\n", num, \
        decimal, pa.count - 1, pa.f_d);
    else
        my_printf("no solution\n");
}

int n_option(char *nb, pa_t pa)
{
    char *num;
    char *base = d_to_b(pa.f_d, my_getnbr(nb), pa.res);
    int decimal;

    num = my_strdup(nb);
    if (verrify_palindrome(base) != -1 && pa.count == 0 && pa.f_imin == 0) {
        my_printf("%s means to %i in 0 iteration(s) in base %i\n", nb, \
        b_to_d(base, pa.f_d), pa.f_d);
        return 0;
    }
    pa = reverse_number(base, pa);
    decimal = b_to_d(pa.nb, pa.f_d);
    if (my_getnbr(pa.nb) < 0 || my_getnbr(pa.nb) > 2147483646) {
        my_printf("no solution\n");
        return 0;
    }
    n_print(num, pa, decimal);
    return 0;
}

























/* my_printf("count : %i, imin : %i, imax : %i\n", palin.count, \
palin.flag_imin, palin.flag_imax);
my_printf("base : %i, nb : %i\n", palin.flag_d, my_getnbr(nb));
my_printf("deci to base: %s\n", base);
my_printf("base to deci: %i\n", b_to_d(base, palin.flag_d));*/