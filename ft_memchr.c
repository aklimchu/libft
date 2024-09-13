/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aklimchu <aklimchu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 09:11:44 by aklimchu          #+#    #+#             */
/*   Updated: 2024/05/06 10:25:45 by aklimchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//The function scans the initial n bytes of the memory area
//pointed to by s for the first instance of c (libc)
void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	new_c;

	new_c = c;
	i = 0;
	while (i < n)
	{
		if (*(unsigned char *) s == new_c)
			return ((unsigned char *) s);
		s++;
		i++;
	}
	return ((void *) 0);
}
