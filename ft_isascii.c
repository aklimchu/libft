/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aklimchu <aklimchu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 09:42:49 by aklimchu          #+#    #+#             */
/*   Updated: 2024/04/17 14:01:53 by aklimchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//The function checks if a given character can be represented as a valid 
//7–bit US-ASCII character (libc)
int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}
