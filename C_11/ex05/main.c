/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jricafor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 12:21:30 by jricafor          #+#    #+#             */
/*   Updated: 2020/02/27 12:25:03 by jricafor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	ft_putnbr(int nb);
void	ft_do_op(char *nb1, char *nb2, char op);

int		main(int ac, char **av)
{
	char c;

	c = av[2][0];
	if (ac == 4)
	{
		if (c == '+' || c == '-' || c == '*'
				|| c == '/' || c == '%')
			ft_do_op(av[1], av[3], c);
		else
		{
			ft_putnbr(0);
			ft_putchar('\n');
		}
	}
	return (0);
}
