/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmengare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 16:12:50 by jmengare          #+#    #+#             */
/*   Updated: 2020/10/30 16:29:10 by jmengare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int x;
	int y;
	int temp;

	x = 0;
	y = size - 1;
	while (x < y)
	{
		temp = *(tab + x);
		*(tab + x) = *(tab + y);
		*(tab + y) = temp;
		x++;
		y--;
	}
}
