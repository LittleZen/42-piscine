int		*ft_range(int min, int max)
{
	int		*out;
	size_t	i;
	size_t	size;

	i = 0;
	if (min >= max)
		return (NULL);
	size = max - min;
	if ((out = (int *)malloc(sizeof(int) * size)))
	{
		while (i < size)
			out[i++] = min++;
	}
	return (out);
}
