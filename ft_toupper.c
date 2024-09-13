/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aklimchu <aklimchu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 12:53:46 by aklimchu          #+#    #+#             */
/*   Updated: 2024/04/18 13:23:26 by aklimchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//If c is a lowercase letter, the function returns its uppercase equivalent.
//Otherwise, it returns c (libc)
int	ft_toupper(int c)
{
	if (c > 96 && c < 123)
		return (c - 32);
	return (c);
}
