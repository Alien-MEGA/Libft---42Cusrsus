/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reben-ha <reben-ha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 19:47:14 by reben-ha          #+#    #+#             */
/*   Updated: 2022/11/04 22:03:15 by reben-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t nulb)
{
	char	*d;
	char	*s;

	d = (char *)dest;
	s = (char *)src;
	if (d == NULL && s == NULL)
		return (NULL);
	if (d <= s)
		d = ft_memcpy(d, s, nulb);
	else
	{
		while (nulb > 0)
		{
			d[nulb - 1] = s[nulb - 1];
			nulb--;
		}	
	}
	return (d);
}
