/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jricafor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 17:49:27 by jricafor          #+#    #+#             */
/*   Updated: 2020/02/18 18:00:17 by jricafor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int size;

	i = 0;
	size = max - min;
	if (min >= mmax)
		return (0);
	*range = malloc(size * sizeof(*range));
	if (!*range)
		return (-1);
	while (min < max)
	{
		range[0][i] = min;
		i++;
		min++;
	}
	return (sizeof(range));
}
