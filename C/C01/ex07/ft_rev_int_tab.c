/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jricafor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 13:50:23 by jricafor          #+#    #+#             */
/*   Updated: 2020/02/08 16:35:31 by jricafor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int stck;

	stck = *a;
	*a = *b;
	*b = stck;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int i;
	int	y;

	i = 0;
	y = size - 1;
	while (i < size / 2)
	{
		ft_swap(&tab[i], &tab[y]);
		i++;
		y--;
	}
}
