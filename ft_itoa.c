/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfirmino <vfirmino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 17:20:00 by vfirmino          #+#    #+#             */
/*   Updated: 2025/07/30 17:21:27 by vfirmino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	len_int(int n)
{
	size_t	size;
	long	i;

	i = n;
	size = 0;
	if (i <= 0)
	{
		i *= -1;
		size++;
	}
	while (i > 0)
	{
		i = i / 10;
		size++;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	size_t	size;
	char	*ptr;
	long	i;

	i = n;
	size = len_int(i);
	ptr = (char *)malloc((size + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	ptr[size] = '\0';
	if (n == 0)
	{
		ptr[0] = '0';
		return (ptr);
	}
	i = i * ((i > 0) - (i < 0));
	size--;
	while (i > 0)
	{
		ptr[size--] = (i % 10) + '0';
		i /= 10;
	}
	if (n < 0)
		ptr[size] = '-';
	return (ptr);
}
