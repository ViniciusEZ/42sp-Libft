/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfirmino <vfirmino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 15:57:02 by vfirmino          #+#    #+#             */
/*   Updated: 2025/07/30 12:39:26 by vfirmino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	str_len;
	size_t	i;

	i = 0;
	if (s1 == NULL || set == NULL)
		return (NULL);
	if (ft_strlen(s1) == 0)
		return (ft_strdup(""));
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	str_len = ft_strlen(s1) - 1;
	while (str_len >= i && ft_strchr(set, s1[str_len]))
		str_len--;
	if (i > str_len)
		return (ft_strdup(""));
	return (ft_substr(s1, i, (str_len - i) + 1));
}
