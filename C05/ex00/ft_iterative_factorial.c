int		ft_iterative_factorial(int nb)
{
	int res;
	int i;

	res = 1;
	i = 2;
	if (nb < 0)
		return (0);
	while (i <= nb)
		res *= i++;
	return (res);
}