/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfirmino <vfirmino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 17:03:30 by vfirmino          #+#    #+#             */
/*   Updated: 2025/07/30 02:52:04 by vfirmino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t			i;
	unsigned char	uch;

	i = ft_strlen(s);
	uch = (unsigned char)c;
	if (uch == '\0')
	{
		return ((char *)(s + i));
	}
	while (i > 0)
	{
		i--;
		if ((unsigned char)s[i] == uch)
		{
			return ((char *)(s + i));
		}
	}
	return (NULL);
}
