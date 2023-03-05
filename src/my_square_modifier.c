/*
** EPITECH PROJECT, 2023
** my_square_modifier.c
** File description:
** to find and replace the biggest square of . by x
*/

#include "../include/bsq.h"

static bool check_bordure(char **map, my_indexlist_t *index)
{
    for (int i = index->current; i > 0; i --)
        if (map[index->i + i][index->j + index->current] != '.')
            return false;
    for (int j = index->current; j > 0; j --)
        if (map[index->i + index->current][index->j + j] != '.')
            return false;
    return true;
}

static int issquare_bigger(char **map, my_indexlist_t *index)
{
    while (index->i + index->current <= index->rows &&
           index->j + index->current <= index->cols) {
        if (map[index->i][index->j + index->current] == '.' &&
            map[index->i + index->current][index->j] == '.' &&
            map[index->i + index->current][index->j + index->current] == '.' &&
            check_bordure(map, index))
            index->current ++;
        else
            return 0;
    }
    return 0;
}

static int issquare(char **map, my_indexlist_t *index)
{
    if (map[index->i][index->j] == '.') {
        index->current = 1;
        issquare_bigger(map, index);
    }
    if (index->current > index->max_size) {
        index->max_size = index->current;
        index->max_i = index->i;
        index->max_j = index->j;
    }
    return 0;
}

int my_square_modifier(char **map, my_indexlist_t *index)
{
    if (index->rows == 1) {
        map[1][0] = 'x';
        return 0;
    }
    for (index->i = 1; index->i < index->rows; index->i ++)
        for (index->j = 0; index->j < index->cols; index->j ++)
            issquare(map, index);
    return 0;
}
