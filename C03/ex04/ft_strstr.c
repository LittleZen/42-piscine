#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	z;
	int	counter;

	i = 0;
	z = 0;
	counter = 0;
	while (to_find[counter] != '\0')
		counter++;
	if (counter == 0)
		return (str);
	while (str[i] != '\0')
	{
		while (to_find[z] == str[i + z])
		{
			if (z == counter - 1)
				return (str + i);
			z++;
		}
		z = 0;
		i++;
	}
	return (0);
}