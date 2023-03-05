/*
** EPITECH PROJECT, 2023
** my.h
** File description:
** my_h
*/

#ifndef MY_H
    #define MY_H
    #include <unistd.h>
    #include <stdlib.h>
    #include <fcntl.h>
    #include <sys/stat.h>
    #include <stdbool.h>
    #include "bsq.h"

void *my_calloc(size_t type, size_t size);
bool isnumber(char const *str);
int my_linecount(char const *str);
int my_putstr(char const *str);
int my_get_nbr(char const *str);
int my_strlen(char const *str);
char *my_strncpy(char *dest, char const *src, int n);
char **my_str_to_word_array(char *str, char sep, size_t i, size_t j);
#endif
