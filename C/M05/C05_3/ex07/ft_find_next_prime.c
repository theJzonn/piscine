/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jricafor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 20:34:41 by jricafor          #+#    #+#             */
/*   Updated: 2020/02/13 07:36:16 by jricafor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int i;
	int prime;

	i = 1;
	prime = 0;
	if (nb <= 1)
		return (0);
	while (i <= nb)
	{
		if (nb % i == 0)
			prime++;
		if (prime > 2)
			return (0);
		i++;
	}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	int res;

	res = 0;
	while (res != 0)
	{
		res = ft_is_prime(nb++);
	}
	return (res);
}
