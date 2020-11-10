int		strtoi(char *c, unsigned int l)
{
	if (l)
		return (c[l - 1] - '0' + 10 * strtoi(c, l - 1));
	else
		return (0);
}

int		ft_atoi(char *str)
{
	int				sign;
	unsigned int	num;
	unsigned int	numlen;

	sign = 1;
	num = 0;
	numlen = 0;
	while (*str)
	{
		if ((*str >= 9 && *str <= 13) || *str == 32 || *str == '+')
			sign *= 1;
		else if (*str == '-')
			sign *= -1;
		else if (*str >= '0' && *str <= '9')
			numlen++;
		else
			break ;
		str++;
	}
	str -= numlen;
	num = strtoi(str, numlen);
	return (sign * num);
}