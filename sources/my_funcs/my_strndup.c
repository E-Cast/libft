/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecastong <ecastong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 11:26:48 by ecastong          #+#    #+#             */
/*   Updated: 2024/02/06 14:09:14 by ecastong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Allocates sufficient memory for a copy of n characters
	from str1 and returns the null terminated copy.*/
char	*my_strndup(const char *src, size_t n)
{
	char	*dest;
	size_t	i;

	if (!src)
		return (NULL);
	if (ft_strlen(src) < n)
		dest = (char *)malloc(ft_strlen(src) + 1);
	else
		dest = (char *)malloc(n + 1);
	if (!dest)
		return (NULL);
	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
