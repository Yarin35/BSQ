/*
** EPITECH PROJECT, 2023
** my_square_modifier.c
** File description:
** to find and replace the biggest square of . by x
*/

#include "../include/bsq.h"

static void issize_changing(char **map, my_indexlist_t *index)
{
    while (index->k < index->rows - 1 && index->l < index->cols - 1) {
        if (map[index->k][index->l] == '.' && map[index->i][index->l] == '.' &&
            map[index->k][index->j] == '.') {
            index->current ++;
        } else
            return;
        index->k ++;
        index->l ++;
    }
    return;
}

static int issquare(char **map, my_indexlist_t *index)
{
    index->k = index->i + 1;
    index->l = index->j + 1;
    if (map[index->i][index->j] == '.') {
        index->current = 1;
        issize_changing(map, index);
        if (index->current > index->max_size) {
            index->max_size = index->current;
            index->max_i = index->i;
            index->max_j = index->j;
        }
    }
    return 0;
}

int my_square_modifier2(char **map, my_indexlist_t *index)
{
    index->rows = my_strlen(map[0]);
    index->cols = index->rows;
    if (index->rows <= 0)
        return 84;
    for (index->i = 0; map[index->i] != NULL; index->i ++) {
        for (index->j = 0; map[index->i][index->j] != '\0'; index->j ++)
            issquare(map, index);
    }
    my_map_printer2(map, index);
    return 0;
}
