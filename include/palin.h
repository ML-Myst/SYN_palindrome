/*
** EPITECH PROJECT, 2020
** palindrome
** File description:
** return a palindrome  number
*/

#include "printf.h"

typedef struct palindrome
{
    int f_n;
    int f_p;
    int f_d;
    int f_imax;
    int f_imin;
    int count;
    int memory;
    int error;
    char *nb;
    char res[100];
} pa_t;

pa_t reverse_number(char *nb, pa_t);
int p_option(char *nb, pa_t pa);
int flags(int ac, char **av, pa_t *pa);
int verrify_palindrome(char *nb);
int n_option(char *nb, pa_t pa);
int b_to_d(char *str, int base);
char *d_to_b(int base, int nb, char *res);
char *sum_of_b(char *number, pa_t pa, char *rev);

#define HELP "USAGE.\n    /palindrome -n number -p palindrome [-b base] \
[-imin i] [-imax i]\n\nDESCRIPTION\n    -n n        integer to be transfo\
rmed (>=0)\n    -p pal      palindromic number to be obtained (incompatib\
le with the -n option) (>= 0) \n                if defined, all fitting \
values of n will be output   \n    -b base     base in witch the procedure \
will be executed (1<b<=10) [def: 10]  \n    -imin i     minimum number of \
iteration, included (>=0) [def: 0]\n    -imin i     minimum number of \
iteration, included (>=0) [def: 0]\n"
#define EXIT_SUCC (0)
#define EXIT_FAIL (84)