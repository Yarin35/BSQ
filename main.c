/*
** EPITECH PROJECT, 2023
** main.c
** File description:
** main
*/

#include "include/my.h"

static int my_error_checker(int argc, char **argv, int error)
{
    int fd = open(argv[1], O_RDONLY);
    struct stat *stats = malloc(sizeof(struct stat));
    stat(argv[1], stats);
    int size = stats->st_size;
    char *buff = malloc(sizeof(char) * (size + 1));

    buff[size] = '\0';
    if (argc < 2 && argc > 3)
        return 84;
    if (fd == -1 || size == 0)
        return 84;
    read(fd, buff, size);
    if (my_linecount(buff) != my_get_nbr(buff) || my_get_nbr(buff) == 0)
        return 84;
    free(stats);
    free(buff);
    close(fd);
    return error;
}

static int my_initialiser(my_indexlist_t *index)
{
    index->rows = 0;
    index->cols = 0;
    index->max_size = 0;
    index->max_i = 0;
    index->max_j = 0;
    index->i = 0;
    index->j = 0;
    index->current = 0;
    index->k = 0;
    index->l = 0;
    return 0;
}

int main(int argc, char **argv)
{
    my_indexlist_t *index = malloc(sizeof(my_indexlist_t));
    int error = my_initialiser(index);
    char **map = NULL;

    if (argc == 2) {
        error = my_error_checker(argc, argv, 0);
        if (error != 0)
            return 84;
        map = my_create_map(argv[1], index);
        my_square_modifier(map, index);
        my_map_printer(map, index);
    } else {
        if (my_error_check(argc, argv) == 84)
            return 84;
        map = board_generator(my_get_nbr(argv[1]), argv[2]);
        if (map == NULL)
            return 0;
        my_square_modifier2(map, index);
    }
    return 0;
}
