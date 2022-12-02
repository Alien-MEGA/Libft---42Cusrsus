/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reben-ha <reben-ha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 19:43:24 by reben-ha          #+#    #+#             */
/*   Updated: 2022/11/07 20:34:40 by reben-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	*strx;

	i = 0;
	strx = (unsigned char *)str;
	while (i < n)
	{
		if (strx[i] == (unsigned char)c)
			return (strx + i);
		i++;
	}
	return (0);
}
