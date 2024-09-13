/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aklimchu <aklimchu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 10:10:52 by aklimchu          #+#    #+#             */
/*   Updated: 2024/05/22 13:02:37 by aklimchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//The function allocates and returns a new string, which is the result of
//the concatenation of ’s1’ and ’s2’.
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_s;
	size_t	totallen;

	totallen = ft_strlen(s1) + ft_strlen(s2);
	new_s = (char *)malloc((totallen + 1) * sizeof(char));
	if (new_s == NULL)
		return ((void *)0);
	while (*s1)
	{
		*new_s = *s1;
		new_s++;
		s1++;
	}
	while (*s2)
	{
		*new_s = *s2;
		new_s++;
		s2++;
	}
	*new_s = '\0';
	return (new_s - totallen);
}
