/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imsbaiti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 09:32:44 by imsbaiti          #+#    #+#             */
/*   Updated: 2024/08/06 09:34:05 by imsbaiti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imsbaiti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 16:11:49 by imsbaiti          #+#    #+#             */
/*   Updated: 2024/08/06 09:32:01 by imsbaiti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*
void ft_putchar(char c)
{
	write(1,&c,1);
}
void ft_putnbr(int n)
{
	if (n > 9)
		ft_putnbr (n / 10);
	ft_putchar(n % 10 + 48);
}
*/	
int	ft_iterative_factorial(int nb)
{
	int	f;

	f = 1;
	if (nb < 0)
		return (0);
	while (nb > 0)
	{
		f *= nb;
		nb--;
	}
	return (f);
}
/*
#include <stdio.h>
int main()
{
	int nb =  5;
	printf("%d",ft_iterative_factorial(nb));
	//ft_putnbr(ft_iterative_factorial(nb));
}
*/		
