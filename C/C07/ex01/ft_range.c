/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jricafor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 15:07:14 by jricafor          #+#    #+#             */
/*   Updated: 2020/02/19 12:45:42 by jricafor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int i;
	int *tab;

	i = 0;
	if (min >= max)
		tab = 0;
	else
	{
		tab = malloc(sizeof(*tab) * (max - min + 1));
		while (min < max)
		{
			tab[i] = min;
			min++;
			i++;
		}
	}
	return (tab);
}
