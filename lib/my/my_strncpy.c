/*
** EPITECH PROJECT, 2022
** my_strncpy.c
** File description:
** copy n characters from a string to another
*/

#include "../../include/my.h"

char *my_strncpy(char *dest, char const *src, int n)
{
    int i = 0;
    for (i = 0; i < n && src[i] != '\0'; i++)
        dest[i] = src[i];
    return dest;
}
