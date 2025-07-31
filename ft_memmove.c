/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfirmino <vfirmino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 17:40:41 by vfirmino          #+#    #+#             */
/*   Updated: 2025/07/30 02:05:09 by vfirmino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*ptr_dest;
	unsigned char	*ptr_src;

	ptr_dest = (unsigned char *)dest;
	ptr_src = (unsigned char *)src;
	if (dest == src || n == 0)
	{
		return (dest);
	}
	if (dest < src)
	{
		ft_memcpy(dest, src, n);
	}
	else
	{
		i = n;
		while (i-- > 0)
		{
			ptr_dest[i] = ptr_src[i];
		}
	}
	return (dest);
}
