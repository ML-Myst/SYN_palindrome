/*
** EPITECH PROJECT, 2020
** my_strdup
** File description:
** duplicate
*/

#include <stdlib.h>
#include "printf.h"

int my_strlen(char const *str);

char *my_strcpy(char *dest, char const *src);

char *my_strdup(char *str)
{
    int len;
    char *dup;

    len = my_strlen(str) + 1;
    dup = malloc(sizeof(char) * len);
    if (dup == NULL)
        return (NULL);
    my_strcpy(dup, str);
    dup[len - 1] = '\0';
    return (dup);
}