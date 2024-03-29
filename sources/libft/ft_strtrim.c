/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecastong <ecastong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 19:32:42 by ecastong          #+#    #+#             */
/*   Updated: 2024/02/12 17:42:58 by ecastong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Returns a copy of str with the characters specified in set 
	removed form the start and end of the string.*/
char	*ft_strtrim(const char *str, const char *set)
{
	size_t	i;
	size_t	sub_len;
	size_t	sub_start;

	if (!str || !set)
		return (NULL);
	i = 0;
	sub_len = 0;
	while (my_isset(str[i], set))
		i++;
	sub_start = i;
	while (str[i])
	{
		if (!my_isset(str[i], set))
			sub_len = i - sub_start + 1;
		i++;
	}
	return (ft_substr(str, sub_start, sub_len));
}
