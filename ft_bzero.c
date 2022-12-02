/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reben-ha <reben-ha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 12:16:24 by reben-ha          #+#    #+#             */
/*   Updated: 2022/11/01 16:59:51 by reben-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *dest, size_t size)
{
	size_t	i;
	char	*destx;

	i = 0;
	destx = (char *)dest;
	while (i < size)
	{
		destx[i] = '\0';
		i++;
	}
}
