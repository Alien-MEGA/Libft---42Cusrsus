/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reben-ha <reben-ha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 20:36:45 by reben-ha          #+#    #+#             */
/*   Updated: 2022/11/09 18:43:02 by reben-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*cheack(char const *s1, char const *s2)
{
	if (!s1 && !s2)
		return (NULL);
	if (!s1)
		return (ft_strdup(s2));
	if (!s2)
		return (ft_strdup(s1));
	return (NULL);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*sjoin;

	if (!s1 || !s2)
		return (cheack(s1, s2));
	sjoin = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!sjoin)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		sjoin[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		sjoin[i] = s2[j];
		j++;
		i++;
	}
	sjoin[i] = '\0';
	return (sjoin);
}
