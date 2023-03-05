/*
** EPITECH PROJECT, 2023
** my_strlen.c
** File description:
** my strlen
*/

#include "../../include/my.h"

int my_strlen(char const *str)
{
    int nb = 0;
    while (str[nb] != '\0')
        nb ++;
    return nb;
}
