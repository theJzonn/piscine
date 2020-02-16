/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jricafor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 16:04:32 by jricafor          #+#    #+#             */
/*   Updated: 2020/02/08 17:11:31 by jricafor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int stck;

	stck = *a;
	*a = *b;
	*b = stck;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int i;

	i = 0;
	while( i < size - 1)
	{
		if(tab[i] > tab[i+1])
			ft_swap(&tab[i], &tab[i+1]);
		i++;
	}
}

#include <stdio.h>
int main(void)
{
	int tab[6] = {5, 56, 54, 7, 1, 10};
	printf("tab:%d, %d, %d, %d, %d, %d\n", tab[0], tab[1], tab[2], tab[3], tab[4], tab[5]);
	ft_sort_int_tab(tab, 6);
	printf("tab:%d, %d, %d, %d, %d, %d", tab[0], tab[1], tab[2], tab[3], tab[4], tab[5]);
}
