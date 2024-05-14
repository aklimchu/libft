/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aklimchu <aklimchu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 09:32:55 by aklimchu          #+#    #+#             */
/*   Updated: 2024/05/14 12:04:41 by aklimchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*new_s;
	unsigned int	i;

	if (ft_strlen(s) - start < len)
		len = ft_strlen(s) - start;
	if (start >= ft_strlen(s))
		len = 0;
	new_s = (char *)malloc((len + 1) * sizeof(char));
	if (new_s == NULL)
		return ((void *)0);
	if (start >= ft_strlen(s))
		return (*new_s = '\0', new_s);
	i = 0;
	while (i < start)
	{
		s++;
		i++;
	}
	i = 0;
	while (i < len)
	{
		new_s[i] = s[i];
		i++;
	}
	return (new_s[i] = '\0', new_s);
}
