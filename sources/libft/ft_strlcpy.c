/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecastong <ecastong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 17:48:20 by ecastong          #+#    #+#             */
/*   Updated: 2024/02/12 17:07:34 by ecastong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Copies up to (dest_size - 1) characters from src
	to dest and null terminates the result.*/
size_t	ft_strlcpy(char *dest, const char *src, size_t dest_size)
{
	size_t	src_len;

	if (!dest || !src)
		return (ft_strlen(src));
	src_len = ft_strlen(src);
	if (src_len + 1 < dest_size)
		ft_memcpy(dest, src, src_len + 1);
	else if (dest_size != 0)
	{
		ft_memcpy(dest, src, dest_size - 1);
		dest[dest_size - 1] = 0;
	}
	return (src_len);
}
