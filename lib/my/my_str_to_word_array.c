/*
** EPITECH PROJECT, 2023
** min.c
** File description:
** mainc
*/

#include "../../include/my.h"

static size_t countline(char *str, const char sep)
{
    size_t count = 0;

    for (int i = 0; str[i] != '\0'; i ++)
        if (str[i] == sep)
            count ++;
    return count;
}

char **my_str_to_word_array(char* str, const char sep, size_t i, size_t j)
{
    size_t count = countline(str, sep);
    char **result = (char **)malloc(sizeof(char *) * (count + 1));
    size_t end = 0;
    size_t start = 0;
    size_t len = my_strlen(str);

    for (size_t k = 0; k < count; k++, i ++, j ++) {
        start = i;
        while (i < len && str[i] != sep)
            i++;
        end = i + 1;
        result[j] = (char*)malloc(sizeof(char) * (end - start + 1));
        for (size_t x = 0; x < end - start; x ++)
            result[j][x] = str[start + x];
        result[j][end - start] = '\0';
    }
    result[j] = NULL;
    return result;
}
