/*
** EPITECH PROJECT, 2023
** my_map_printer.c
** File description:
** my_map_printer
*/

#include "../include/bsq.h"

static int replace_biggest_square(char **map, my_indexlist_t *index)
{
    for (int i = index->max_i; i < index->max_i + index->max_size; i ++)
        for (int j = index->max_j; j < index->max_j + index->max_size; j ++)
            map[i][j] = 'x';
    return 0;
}

int my_map_printer(char **map, my_indexlist_t *index)
{
    replace_biggest_square(map, index);
    free(map[0]);
    for (int i = 1; map[i] != NULL; i ++) {
        write(1, map[i], index->cols);
        free(map[i]);
    }
    free(map);
    free(index);
    return 0;
}
