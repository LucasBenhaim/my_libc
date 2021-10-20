/*
** EPITECH PROJECT, 2021
** my_strdup.c
** File description:
** copy a string
*/

#include <stdlib.h>

char *my_strdup(char const *src)
{
    char *dest;
    int i = 0;
    int len = 0;

    while (src[len])
        len++;
    dest = malloc(sizeof(char) * (len + 1));
    while (src[i]) {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}
