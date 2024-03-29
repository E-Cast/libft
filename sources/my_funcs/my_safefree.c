/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_safefree.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecast <ecast@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 11:30:31 by ecastong          #+#    #+#             */
/*   Updated: 2024/02/19 02:49:13 by ecast            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Ensures the received pointer is valid and then frees it, returns NULL.*/
void	*my_safefree(void *ptr)
{
	if (ptr)
	{
		free(ptr);
		ptr = NULL;
	}
	return (ptr);
}
