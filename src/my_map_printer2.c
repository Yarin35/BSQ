/*
** EPITECH PROJECT, 2023
** my_map_printer.c
** File description:
** my_map_printer
*/

#include "../include/bsq.h"

int my_map_printer2(char **map, my_indexlist_t *index)
{
    index->i = index->max_i;
    while (index->i < index->max_i + index->max_size) {
        index->j = index->max_j;
        while (index->j < index->max_j + index->max_size) {
            map[index->i][index->j] = 'x';
            index->j++;
        }
        index->i++;
    }
    for (index->i = 0; map[index->i] != NULL; index->i ++) {
        write(1, map[index->i], index->cols);
        free(map[index->i]);
    }
    free(map);
    free(index);
    return 0;
}
