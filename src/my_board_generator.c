/*
** EPITECH PROJECT, 2023
** my_board_generator
** File description:
** to create a board
*/

#include "../include/bsq.h"

static int my_line_creator(char *str, int index, char *pattern, int rows)
{
    int len = my_strlen(pattern);

    for (int j = 0; j < rows; j ++) {
        str[j] = pattern[index ++];
        if (index == len)
            index = 0;
    }
    str[rows] = '\n';
    str[rows + 1] = '\0';
    return index;
}

char **board_generator(int rows, char *pattern)
{
    int index = 0;
    char **map = malloc(sizeof(char *) * (rows + 1));

    for (int i = 0; i < rows; i ++) {
        map[i] = malloc(sizeof(char) * (rows + 2));
        index = my_line_creator(map[i], index, pattern, rows);
    }
    map[rows] = NULL;
    return map;
}
