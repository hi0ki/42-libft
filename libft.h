#ifndef LIBFT_H
#define LIBFT_H

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int ft_tolower(int c);
int ft_atoi(const char *str);
void ft_bzero(void *s, size_t n);
int ft_isalnum(int c);
int ft_isalpha(int c);
int ft_isascii(int c);
int ft_isdigit(int c);
int ft_isprint(int c);
size_t ft_strlen(const char *str);
int ft_tolower(int c);
int ft_toupper(int c);
#endif