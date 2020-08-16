/*
** EPITECH PROJECT, 2019
** printf.h
** File description:
** header
*/

#ifndef H_PRINTF
#define H_PRINTF

char *my_strdup(char *str);
int my_strlen(char const *str);
void my_putchar(char c);
void my_putstr(char const *str);
void my_put_nbr(int nb);
char *my_revstr(char *str);
void my_convert_num(char *str, int nbr);
void my_convert_bin(int nbr);
int my_printf(char *str, ... );
int my_getnbr(char const *str);
int my_matchstick_getnbr(char const *str);
char **my_str_to_word_array(char const *str);
int my_strcmp(char const *s1, char const *s2);
char *my_int_to_str(int nb);
char *my_strcpy(char *dest, char const *src);
char *my_strdup(char *str);

#endif
