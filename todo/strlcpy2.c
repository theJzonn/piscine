
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
    unsigned int	i;
	unsigned int	taille;

    i = 0;
	taille = 0;
    if (dest[0] == '\0')
		return (0);
	while (src[taille] != '\0')
		++taille;
    if (size == 0)
		return (taille);
	while (src[i] != '\0' && i < (size - 1))
	{
		dest[i] = src[i];
		++i;
	}
	dest[i] = '\0';
	return (taille);
}