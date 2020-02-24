int	ft_find_next_prime(int nb)
{
	int	i;

	if (nb <= 2)
		return (2);
	i = nb;
	while (!ft_is_prime(i))
		i++;
	return (i);
}