/*
** EPITECH PROJECT, 2019
** my_strlen
** File description:
** count and return the number of characters of a string
*/

int my_strlen(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        i++;
    }
    return i;
}
