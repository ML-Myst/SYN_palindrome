/*
** EPITECH PROJECT, 2019
** my_str_to_word_array.c
** File description:
** my_str_to_word_array
*/

#include <stdlib.h>
#include <unistd.h>

int alpha(char c)
{
    if (c >= 33 && c <= 123)
        return 1;
    else
        return 0;
}

int str_count(char *str)
{
    int result = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (alpha(str[i]) == 1)
            result++;
        while (alpha(str[i]) == 1 && str[i + 1] != '\0')
            i++;
    }
    return result;
}

int str_length(char *str, int a)
{
    int len = 0;

    while (alpha(str[a]) == 1) {
        a++;
        len++;
    }
    return len;
}

char **my_str_to_word_array(char *str)
{
    char **array = malloc(sizeof(char *) * (str_count(str) + 1));
    int i = 0;
    int n = 0;
    int a = 0;

    while (i != str_count(str)) {
        a = 0;
        while (alpha(str[n]) == 0)
            n++;
        array[i] = malloc(sizeof(char) * (str_length(str, n) + 1));
        while (alpha(str[n]) == 1) {
            array[i][a] = str[n];
            a++;
            n++;
        }
        array[i][a] = '\0';
        i++;
    }
    array[i] = NULL;
    return array;
}