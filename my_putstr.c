/*
** EPITECH PROJECT, 2021
** my_putstr.c
** File description:
** display a string
*/

void    my_putchar(char c);

int    my_putstr(char const *str)
{
    for (int i = 0; str[i]; i++) {
        my_putchar(str[i]);
    }
    my_putchar('\n');
    return (0);
}
