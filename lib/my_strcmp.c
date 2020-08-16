/*
** EPITECH PROJECT, 2017
** my_strcmp
** File description:
** compare two strings
*/

int my_strcmp(char *s1, char *s2)
{
    int i = 0;

    while (s1[i]) {
        if (s1[i] != s2[i])
            return (-1);
        i++;
    }
    return (0);
}