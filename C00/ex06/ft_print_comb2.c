/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imsbaiti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 15:35:15 by imsbaiti          #+#    #+#             */
/*   Updated: 2024/07/27 15:51:54 by imsbaiti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_comb(int a, int b)
{
	ft_putchar (a / 10 + '0');
	ft_putchar (a % 10 + '0');
	ft_putchar (' ');
	ft_putchar (b / 10 + '0');
	ft_putchar (b % 10 + '0');
	if (a != 98)
	{
		ft_putchar (',');
		ft_putchar (' ');
	}
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_comb (a, b);
			b++;
		}
		a++;
	}
}
