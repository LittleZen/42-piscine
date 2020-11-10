int	ft_sqrt(int nb)
{
	unsigned int i;
	unsigned int temp;

	i = 0;
	temp = (unsigned int)nb;
	while ((i * i) < temp)
		i++;
	if ((i * i) == temp)
		return (i);
	return (0);
}