/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do_op.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jricafor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 11:41:07 by jricafor          #+#    #+#             */
/*   Updated: 2020/02/27 14:10:06 by jricafor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else
	{
		if (nb < 0)
		{
			write(1, "-", 1);
			nb = -nb;
		}
		if (nb >= 10)
		{
			ft_putnbr(nb / 10);
			ft_putnbr(nb % 10);
		}
		else if (nb < 10)
		{
			ft_putchar(nb + '0');
		}
	}
}

int		ft_atoi(char *str)
{
	int nb;
	int i;
	int negatifs;

	i = 0;
	nb = 0;
	negatifs = 0;
	while (str[i] == ' ' || str[i] == '\f' || str[i] == '\n'
			|| str[i] == '\r' || str[i] == '\t' || str[i] == '\v')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			negatifs++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10 + str[i] - 48;
		i++;
	}
	if (negatifs % 2 != 0)
		nb = -nb;
	return (nb);
}

void	ft_do_op(char *nb1, char *nb2, char op)
{
	int nb1_int;
	int nb2_int;

	nb1_int = ft_atoi(nb1);
	nb2_int = ft_atoi(nb2);
	if (op == '+')
		ft_putnbr(nb1_int + nb2_int);
	if (op == '-')
		ft_putnbr(nb1_int - nb2_int);
	if (op == 42)
		ft_putnbr(nb1_int * nb2_int);
	if (op == '/' && nb2_int == 0)
		ft_putstr("Stop : division by zero");
	else if (op == '%' && nb2_int == 0)
		ft_putstr("Stop : modulo by zero");
	else if (op == '/')
		ft_putnbr(nb1_int / nb2_int);
	else if (op == '%')
		ft_putnbr(nb1_int % nb2_int);
	ft_putchar('\n');
}
