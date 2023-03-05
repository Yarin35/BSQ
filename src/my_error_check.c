/*
** EPITECH PROJECT, 2023
** my_error_check.c
** File description:
** error check
*/

#include "../include/bsq.h"

int my_error_check(int argc, char **argv)
{
    if (argc > 3)
        return 84;
    if (!(isnumber(argv[1])))
        return 84;
    if (my_get_nbr(argv[1]) == 0 || my_strlen(argv[2]) == 0)
        return 0;
    for (int i = 0; argv[2][i] != '\0'; i ++)
        if (argv[2][i] != '.' && argv[2][i] != 'o' && argv[2][i] != '\n')
            return 84;
    return 0;
}
