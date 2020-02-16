/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jricafor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 19:03:22 by jricafor          #+#    #+#             */
/*   Updated: 2020/02/08 19:05:35 by jricafor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	head(int x, int y)
{
	int m;

	m = 0;
	if (x > 0 && y > 0)
	{
		ft_putchar('A');
	}
	while (m < x - 2)
	{
		ft_putchar('B');
		m++;
	}
	if (x > 1)
	{
		ft_putchar('A');
	}
	ft_putchar('\n');
}

void	middle(int x, int y)
{
	int a;

	a = 0;
	if (x > 0 && y > 0)
	{
		ft_putchar('B');
	}
	while (a < x - 2)
	{
		ft_putchar(' ');
		a++;
	}
	if (x > 1)
	{
		ft_putchar('B');
	}
	ft_putchar('\n');
}

void	bottom(int x, int y)
{
	int m;

	m = 0;
	if (x > 0 && y > 0)
	{
		ft_putchar('C');
	}
	while (m < x - 2)
	{
		ft_putchar('B');
		m++;
	}
	if (x > 1)
	{
		ft_putchar('C');
	}
	ft_putchar('\n');
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
