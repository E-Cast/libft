/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecast <ecast@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 23:00:42 by ecastong          #+#    #+#             */
/*   Updated: 2024/02/10 19:08:55 by ecast            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Converts the initial portion of the string into an integer and returns it.*/
int	ft_atoi(const char *str)
{
	size_t	i;
	int		sign;
	int		num;

	i = 0;
	sign = 1;
	num = 0;
	while (my_isspace(str[i]))
		i++;
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] && (ft_isdigit(str[i])))
	{
		num = num * 10 + (str[i] - 48) * sign;
		i++;
	}
	return (num);
}
