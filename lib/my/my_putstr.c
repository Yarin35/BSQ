/*
** EPITECH PROJECT, 2022
** my_putstr.c
** File description:
** my_putstr
*/
#include "../../include/my.h"

static void my_putchar(char c)
{
    write(1, &c, 1);
    return;
}

int my_putstr(char const *str)
{
    int i = 0;

    while (str[i] != '\0'){
        my_putchar(str[i]);
        i++;
    }
    return i;
}
