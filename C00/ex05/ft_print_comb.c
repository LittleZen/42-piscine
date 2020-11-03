/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmengare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 10:05:12 by jmengare          #+#    #+#             */
/*   Updated: 2020/11/03 10:23:14 by jmengare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	int a;
	int	b;
	int	c;

	a = '0' - 1;
	while (a++ < '7')
	{
		b = a;
		while (b++ < '8')
		{
			c = b;
			while (c++ < '9')
			{
				if (!(a == '0' && b == '1' && c == '2'))
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				ft_putchar(a);
				ft_putchar(b);
				ft_putchar(c);
			}
		}
	}
}
