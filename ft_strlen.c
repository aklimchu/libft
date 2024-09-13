/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aklimchu <aklimchu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 10:30:03 by aklimchu          #+#    #+#             */
/*   Updated: 2024/05/06 10:34:46 by aklimchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//The function calculates the length of the string pointed to by s,
//excluding the terminating null byte (libc)
size_t	ft_strlen(const char *c)
{
	size_t		i;

	i = 0;
	while (*c)
	{
		i++;
		c++;
	}
	return (i);
}
