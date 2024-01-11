/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crmorale <crmorale@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 13:53:39 by crmorale          #+#    #+#             */
/*   Updated: 2024/01/11 14:11:27 by crmorale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <strings.h>
#include <ctype.h>
#include <stdlib.h>
#include <limits.h>
#include <unistd.h>

int	ft_isalnum(int c);
int	ft_isdigit(int c);
int	ft_isprint(int c);
int	ft_isalpha(int c);
int	ft_isascii(int c);
int	ft_strlen(const char *s);
int	ft_memset(void *b, int c, size_t len);
int	ft_toupper(int c);
int	ft_tolower(int c);
int	ft_bzero(void *s, size_t n);
int	ft_atoi(const char *str);

#endif
