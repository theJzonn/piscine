/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jricafor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 11:39:33 by jricafor          #+#    #+#             */
/*   Updated: 2020/02/10 11:47:07 by jricafor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_combn(int n)
{
	char	nb1;
	char	nb2;
	char	nb3;
	int		count;

	count = 0;
	nb1 = '0';
	while (nb1 <= '7' && count < )
	{
		nb2 = nb1 + 1;
		while (nb2 <= '8')
		{
			nb3 = nb2 + 1;
			while (nb3 <= '9')
			{
				write(1, &nb1, 1);
				write(1, &nb2, 1);
				write(1, &nb3, 1);
				if (nb1 != '7')
					write(1, ", ", 2);
				nb3++;
			}
			nb2++;
		}
		nb1++;
	}
}
