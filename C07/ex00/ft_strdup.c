int		ft_strlen(char *str)
{
	int len;

	len = 0;
	while (*str++)
		len++;
	return (len);
}

char	*ft_strdup(char *src)
{
	char	*out;
	int		len;

	len = ft_strlen(src);
	if (!(out = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	while (*src)
	{
		*out++ = *src++;
	}
	*out = '\0';
	return (out - len);
}