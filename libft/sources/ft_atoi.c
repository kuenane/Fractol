/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsouchet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/11 08:40:56 by bsouchet          #+#    #+#             */
/*   Updated: 2016/03/11 08:41:55 by bsouchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				ft_atoi(char *str, int *k, int r, int s)
{
	while (str[*k] == 32)
		(*k)++;
	if (str[*k] == 45)
		s = -1;
	if (str[*k] == 43 || str[*k] == 45)
		(*k)++;
	while (str[*k] && str[*k] >= 48 && str[*k] <= 57)
	{
		r = r * 10 + str[*k] - 48;
		(*k)++;
	}
	while (str[*k] != 32 && str[*k] != 0)
		(*k)++;
	return (s * r);
}
