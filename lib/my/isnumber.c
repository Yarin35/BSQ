/*
** EPITECH PROJECT, 2023
** isnumber.c
** File description:
** is number
*/

#include "../../include/my.h"

bool isnumber(char const *str)
{
    for (int i = 0; str[i] != '\0'; i ++)
        if (str[i] < '0' || str[i] > '9')
            return false;
    return true;
}
