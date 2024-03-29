/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecastong <ecastong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 21:39:10 by ecastong          #+#    #+#             */
/*   Updated: 2024/02/12 16:29:25 by ecastong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Appends up to (dest_size - ft_strlen(dest) - 1) characters from
	src to the end of dest and null terminates the string.*/
size_t	ft_strlcat(char	*dest, const char *src, size_t dest_size)
{
	size_t	dest_len;
	size_t	src_len;

	if (!dest || !src)
		return (ft_strlen(dest) + ft_strlen(src));
	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	if (dest_len >= dest_size)
	{
		dest_len = dest_size;
		return (dest_len + src_len);
	}
	if (dest_size > dest_len + src_len)
		ft_memcpy(dest + dest_len, src, src_len + 1);
	else
	{
		ft_memcpy(dest + dest_len, src, dest_size - dest_len - 1);
		dest[dest_size - 1] = '\0';
	}
	return (dest_len + src_len);
}
