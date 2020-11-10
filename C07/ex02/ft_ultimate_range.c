int		*ft_range(int min, int max)
{
	int		*out;
	int		i;
	int		size;

	i = 0;
	size = max - min;
	if ((out = (int *)malloc(sizeof(int) * size)))
	{
		while (i < size)
			out[i++] = min++;
	}
	return (out);
}

int		ft_ultimate_range(int **range, int min, int max)
{
	int	size;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	if (!(*range = ft_range(min, max)))
		return (-1);
	return (size);
}