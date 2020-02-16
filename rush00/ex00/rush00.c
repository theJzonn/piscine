/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jricafor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 18:47:16 by jricafor          #+#    #+#             */
/*   Updated: 2020/02/08 18:50:39 by jricafor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	head(int x, int y)
{
	int m;

	m = 0;
	if (x > 0 && y > 0)
	{
		ft_putchar('o');
	}
	while (m < x - 2)
	{
		ft_putchar('-');
		m++;
	}
	if (x > 1)
	{
		ft_putchar('o');
	}
	ft_putchar('\n');
}

void	middle(int x, int y)
{
	int a;

	a = 0;
	if (x > 0 && y > 0)
	{
		ft_putchar('|');
	}
	while (a < x - 2)
	{
		ft_putchar(' ');
		a++;
	}
	if (x > 1)
	{
		ft_putchar('|');
	}
	ft_putchar('\n');
}

void	bottom(int x, int y)
{
	head(x, y);
}

void	rush(int x, int y)
{
	int v;

	v = 0;
	head(x, y);
	while (v < y - 2)
	{
		middle(x, y);
		v++;
	}
	if (y > 1)
		bottom(x, y);
}
