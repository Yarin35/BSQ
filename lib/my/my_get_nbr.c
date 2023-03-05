/*
** EPITECH PROJECT, 2022
** my_getnbr.c
** File description:
** get an int from a string
*/

#include "../../include/my.h"

int my_get_nbr(char const *str)
{
    int k = 0;
    int i = 0;
    int minus = 0;

    while ((str[i] <= '9' && str[i] >= '0') || str[i] == '-' || str[i] == '+'){
        if (str[i] == '-')
            minus ++;
        if (str[i] <= '9' && str[i] >= '0') {
            k += str[i] - '0';
            k *= 10;
        }
        i ++;
    }
    k /= 10;
    if (minus % 2 != 0)
        k *= -1;
    return k;
}
