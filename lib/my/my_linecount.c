/*
** EPITECH PROJECT, 2023
** my_linecount.c
** File description:
** linecounter
*/

#include "../../include/my.h"

int my_linecount(char const *str)
{
    int nb = 0;
    for (int i = 0; str[i] != '\0'; i ++)
        if (str[i] == '\n')
            nb ++;
    nb --;
    return nb;
}
