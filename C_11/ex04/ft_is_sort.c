/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jricafor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 11:21:17 by jricafor          #+#    #+#             */
/*   Updated: 2020/02/27 11:22:12 by jricafor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int		i;
	int		count_plus;
	int		count_minus;

	i = 0;
	count_plus = 0;
	count_minus = 0;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) < 0)
			count_plus++;
		else if (f(tab[i], tab[i + 1]) > 0)
			count_minus++;
		i++;
	}
	if (count_plus == 0 || count_minus == 0)
		return (1);
	return (0);
}
