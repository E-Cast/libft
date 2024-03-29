/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecastong <ecastong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 01:25:58 by ecastong          #+#    #+#             */
/*   Updated: 2024/02/12 17:18:35 by ecastong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Applies the function fnc on each character of
	str to create a new string with malloc.*/
char	*ft_strmapi(const char *str, char (*fnc)(unsigned int, char))
{
	char	*results;
	size_t	str_len;
	size_t	i;

	str_len = ft_strlen(str);
	results = ft_calloc(str_len + 1, sizeof(char));
	if (!results)
		return (NULL);
	i = 0;
	while (i < str_len)
	{
		results[i] = (*fnc)(i, str[i]);
		i++;
	}
	results[i] = 0;
	return (results);
}
