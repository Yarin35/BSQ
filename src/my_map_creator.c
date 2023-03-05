/*
** EPITECH PROJECT, 2023
** my_map_creator.c
** File description:
** to create the map
*/

#include "../include/bsq.h"

static int get_map_size(char const *filepath)
{
    struct stat Stats;
    struct stat *stats = &Stats;

    if (stat(filepath, stats) == 84)
        return -84;
    return stats->st_size;
}

char **my_create_map(char const *filepath, my_indexlist_t *index)
{
    int size = get_map_size(filepath);
    int fd = open(filepath, O_RDONLY);
    char *buff = my_calloc(sizeof(char), (size + 1));
    char **map = NULL;

    read(fd, buff, size);
    buff[size] = '\0';
    map = my_str_to_word_array(buff, '\n', 0, 0);
    index->rows = my_get_nbr(map[0]);
    index->cols = my_strlen(map[1]);;
    free(buff);
    close(fd);
    return map;
}
