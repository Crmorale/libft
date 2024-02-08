/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crmorale <crmorale@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 16:06:29 by crmorale          #+#    #+#             */
/*   Updated: 2024/02/08 14:42:17 by crmorale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*joined_str;

	joined_str = malloc(strlen(s1) + strlen(s2) + 1); // +1 para el carácter nulo final

	if (joined_str == NULL)
		return (NULL);

	strcpy (joined_str, s1); // Copia s1 en la nueva cadena
	strcat (joined_str, s2); // Añade s2 al final de la nueva cadena
	return (joined_str);
}

int	main (void)
{
	char	*s1  = "Necesito alforjas";
	char	*s2  = " para la bicicleta";
	char	*result;

	result = ft_strjoin(s1, s2);
	
	printf("La cadena resultante es: %s\n", result);
	free(result);
	
	return (0);
}