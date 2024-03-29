/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecastong <ecastong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 16:46:45 by ecastong          #+#    #+#             */
/*   Updated: 2024/02/12 16:19:31 by ecastong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Returns the first occurrence of byte in the first len bytes of src.*/
void	*ft_memchr(const void *src, int byte, size_t len)
{
	unsigned char	*str;
	unsigned char	chr;
	size_t			i;

	if (!src)
		return (NULL);
	str = (unsigned char *)src;
	chr = (unsigned char)byte;
	i = 0;
	while (i < len)
	{
		if (str[i] == chr)
			return ((void *)&str[i]);
		i++;
	}
	return (NULL);
}
