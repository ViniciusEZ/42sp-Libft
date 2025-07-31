/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfirmino <vfirmino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 19:23:41 by vfirmino          #+#    #+#             */
/*   Updated: 2025/07/30 13:00:42 by vfirmino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(const char *str, char delimiter)
{
	int		i;
	size_t	count;

	i = 0;
	count = 0;
	if (!str)
		return (0);
	while (str[i] != '\0')
	{
		if (str[i] != delimiter)
		{
			if (i == 0 || str[i - 1] == delimiter)
			{
				count++;
			}
		}
		i++;
	}
	return (count);
}

static int	len_word(const char *str, char c)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0' && str[i] != c)
	{
		i++;
	}
	return (i);
}

static void	free_strs(char **strs, size_t i)
{
	while (i > 0)
	{
		i--;
		free(strs[i]);
	}
	free(strs);
}

char	**ft_split(char const *s, char c)
{
	char	**strs;
	size_t	i;
	size_t	j;

	strs = (char **)ft_calloc((count_words(s, c) + 1), sizeof(char *));
	if (!strs)
		return (NULL);
	i = 0;
	while (s && *s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			strs[i] = (char *)ft_calloc((len_word(s, c) + 1), sizeof(char));
			if (!strs[i])
				return (free_strs(strs, i), NULL);
			j = 0;
			while (*s != c && *s)
				strs[i][j++] = *s++;
			i++;
		}
	}
	return (strs);
}
