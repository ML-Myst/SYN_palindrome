/*
** EPITECH PROJECT, 2019
** my_strcpy
** File description:
** function that copy a string into an other
*/

static int lenght(char const *src)
{
    int x = 0;

    while (src [x] != '\0') {
        x++;
    }
    return (x);
}

char *my_strcpy(char *dest, char const *src)
{
    int i = 0;

    while (i < lenght(src)) {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return dest;
}
