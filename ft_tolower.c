/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aklimchu <aklimchu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 13:28:22 by aklimchu          #+#    #+#             */
/*   Updated: 2024/04/18 13:29:04 by aklimchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//If c is  an uppercase letter, the function returns its lowercase equivalent.
//Otherwise, it returns c (libc)
int	ft_tolower(int c)
{
	if (c > 64 && c < 91)
		return (c + 32);
	return (c);
}
