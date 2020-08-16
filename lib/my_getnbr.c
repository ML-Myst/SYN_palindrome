/*
** EPITECH PROJECT, 2019
** my_getnbr.c
** File description:
** returns a number
*/

int my_getnbr(char const *str)
{
    int i = 0;
    int nbr = 0;

    if (str[i] == '-')
        i++;
    for (; str[i]; i++)
        if (str[i] >= '0' && str[i] <= '9')
            nbr = nbr * 10 + str[i] - '0';
    if (str[0] == '-')
        nbr *= -1;
    return (nbr);
}
