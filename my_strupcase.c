/*
** EPITECH PROJECT, 2021
** my_strupcase.c
** File description:
** every letter in uppercase
*/

char    *my_strupcase(char *str)
{
    int i = 0;

    while (str[i]) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] -= 32;
        }
        i++;
    }
    return (str);
}
