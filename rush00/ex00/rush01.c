/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jricafor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 18:54:25 by jricafor          #+#    #+#             */
/*   Updated: 2020/02/08 19:00:53 by jricafor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	head(int x, int y)
{
	int m;

	m = 0;
	if (x > 0 && y > 0)
	{
		ft_putchar('/');
	}
	while (m < x - 2)
	{
		ft_putchar('*');
		m++;
	}
	if (x > 1)
	{
		ft_putchar('\\');
	}
	ft_putchar('\n');
}

void	middle(int x, int y)
{
	int a;

	a = 0;
	if (x > 0 && y > 0)
	{
		ft_putchar('*');
	}
	while (a < x - 2)
	{
		ft_putchar(' ');
		a++;
	}
	if (x > 1)
	{
		ft_putchar('*');
	}
	ft_putchar('\n');
}

void	bottom(int x, int y)
{
	int m;

	m = 0;
	if (x > 0 && y > 0)
	{
		ft_putchar('\\');
	}
	while (m < x - 2)
	{
		ft_putchar('*');
		m++;
	}
	if (x > 1)
	{
		ft_putchar('/');
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
