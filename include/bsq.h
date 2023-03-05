/*
** EPITECH PROJECT, 2023
** struct.h
** File description:
** struct for bsq
*/

#ifndef BSQ_H
    #define BSQ_H
    #include "my.h"

typedef struct my_indexlist_s {

    int rows;
    int cols;
    int max_size;
    int max_i;
    int max_j;
    int i;
    int j;
    int current;
    int k;
    int l;

} my_indexlist_t;

char **my_create_map(char const *filepath, my_indexlist_t *index);
int my_error_check(int argc, char **argv);
char **board_generator(int rows, char *pattern);
int my_map_printer(char **map, my_indexlist_t *index);
int my_map_printer2(char **map, my_indexlist_t *index);
int my_square_modifier(char **map, my_indexlist_t *index);
int my_square_modifier2(char **map, my_indexlist_t *index);
#endif
