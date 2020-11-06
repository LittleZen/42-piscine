/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmengare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 10:06:35 by jmengare          #+#    #+#             */
/*   Updated: 2020/11/05 10:06:39 by jmengare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_charupcase(char *str)
{
	if (*str >= 'a' && *str <= 'z')
		*str -= 32;
	return (str);
}

char	*ft_charlowcase(char *str)
{
	if (*str >= 'A' && *str <= 'Z')
		*str += 32;
	return (str);
}

int		char_notalphan(char *str)
{
	return (!((*str >= 'A' && *str <= 'Z') \
	|| (*str >= 'a' && *str <= 'z') || (*str >= '0' && *str <= '9')));
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (i == 0 || char_notalphan(&str[i - 1]))
			str[i] = *ft_charupcase(&str[i]);
		else
			str[i] = *ft_charlowcase(&str[i]);
		i++;
	}
	return (str);
}
