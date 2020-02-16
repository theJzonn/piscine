/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jricafor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 16:04:32 by jricafor          #+#    #+#             */
/*   Updated: 2020/02/08 16:53:10 by jricafor         ###   ########.fr       */
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
	int j;

	i = 0;
	while( i < size)
	{
		j = i;
		while(tab[j] < tab[j+1])
		{
			ft_swap(tab[j],tab[j+1]);
			j--;
		}
		i++;
	}
}

#include <stdio.h>
int main(void)
{
	tab[6] = {5, 56, 54, 7, 1, 10};
	printf("tab:%d, %d, %d, %d, %d, %d", tab[0], tab[1], tab[2], tab[3], tab[5]);
	ft_sort_int_tab(tab);
	printf("tab:%d, %d, %d, %d, %d, %d", tab[0], tab[1], tab[2], tab[3], tab[5]);
	printf("tab:%d, %d, %d, %d, %d, %d", tab[0], tab[1], tab[2], tab[3], tab[5]);
}
