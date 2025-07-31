/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfirmino <vfirmino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 20:33:37 by vfirmino          #+#    #+#             */
/*   Updated: 2025/07/30 03:44:04 by vfirmino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	mul;
	int	number;

	mul = 1;
	i = 0;
	number = 0;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == 32)
		i++;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			mul *= -1;
		i++;
	}
	while (ft_isdigit(nptr[i]))
	{
		number = (number * 10) + (nptr[i] - '0');
		i++;
	}
	return (number * mul);
}
