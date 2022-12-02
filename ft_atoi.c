/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reben-ha <reben-ha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 18:42:01 by reben-ha          #+#    #+#             */
/*   Updated: 2022/11/07 14:52:20 by reben-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	result(const char *str, int i, int sg)
{
	size_t	nb;

	nb = 0;
	while (ft_isdigit(str[i]))
	{
		nb = nb * 10 + (((int)str[i]) - 48);
		i++;
	}
	if (nb > 9223372036854775807 && sg == 1)
		return (-1);
	else if (nb > 9223372036854775807 && sg == -1)
		return (0);
	return (nb * sg);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	sg;

	sg = 1;
	i = 0;
	while (str[i] == '\t' || str[i] == '\v' || str[i] == '\f'
		|| str[i] == '\r' || str[i] == '\n' || str[i] == ' ')
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sg = -1;
		i++;
	}
	return (result(str, i, sg));
}
