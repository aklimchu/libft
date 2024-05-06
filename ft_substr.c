/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aklimchu <aklimchu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 09:32:55 by aklimchu          #+#    #+#             */
/*   Updated: 2024/05/06 10:38:08 by aklimchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static char	*emptys(char *new_s)
{
	*new_s = '\0';
	return (new_s);
}

static char	*write_s(char *new_s, char const *s, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		*new_s = *s;
		s++;
		new_s++;
		i++;
	}
	*new_s = '\0';
	return (new_s - len);
}

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
		return (emptys(new_s));
	i = 0;
	while (i < start)
	{
		s++;
		i++;
	}
	new_s = write_s(new_s, s, len);
	return (new_s);
}
