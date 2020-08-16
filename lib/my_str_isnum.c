/*
** EPITECH PROJECT, 2019
** My_lib
** File description:
** this file aims only to build the library my_lib
*/

int my_str_isnum(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] > 57 || str[i] < 48)
            return (0);
        i++;
    }
    return (1);
}