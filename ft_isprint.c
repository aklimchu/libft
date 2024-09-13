/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aklimchu <aklimchu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 09:58:10 by aklimchu          #+#    #+#             */
/*   Updated: 2024/04/24 16:19:46 by aklimchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//The function checks whether a character is printable character (libc)
int	ft_isprint(int c)
{
	if (c > 31 && c < 127)
		return (1);
	return (0);
}
