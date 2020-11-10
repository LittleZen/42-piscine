int		ft_strlen(char *str)
{
	int unsigned len;

	len = 0;
	while (str[len] != '\0')
    {
		len++;
    }
	return (len);
}