/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reben-ha <reben-ha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 19:38:48 by reben-ha          #+#    #+#             */
/*   Updated: 2022/11/08 17:28:13 by reben-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	hm_word(char *str, int c)
{
	int	i;
	int	hmword;

	hmword = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] != c && (str[i + 1] == c || !str[i + 1]))
			hmword++;
		i++;
	}
	return (hmword);
}

static void	my_free(char **result, int j)
{
	while (j)
	{
		free(result[j]);
		j--;
	}
	free(result);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		i;
	int		j;
	int		o;

	i = 0;
	o = 0;
	if (!s)
		return (NULL);
	result = (char **)malloc(sizeof (char *) * (hm_word((char *)s, c) + 1));
	if (!result)
		return (NULL);
	while (o < hm_word((char *)s, c))
	{	
		while (s[i] && s[i] == c)
			i++;
		j = i;
		while (s[i] != c && s[i])
			i++;
		result[o] = ft_substr(s, j, i - j);
		if (!result[o])
			return (my_free(result, o), NULL);
		o++;
	}
	return (result[o] = NULL, result);
}
