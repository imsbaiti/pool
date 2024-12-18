/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imsbaiti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 13:46:46 by imsbaiti          #+#    #+#             */
/*   Updated: 2024/08/11 11:12:52 by imsbaiti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>
void ft_putchar(char c)
{
	write(1,&c,1);
}
void ft_putnbr(int nb)
{
	if(nb > 9)
		ft_putnbr(nb / 10);
	ft_putchar(nb % 10 + 48);
}
void	ft_ultimate_ft(int  *********nbr)
{
	*********nbr = 42;
}

int main()
{
	int a ;
	int *p1 = &a;
	int **p2 = &p1;
	int ***p3 = &p2;
	int  ****p4 = &p3;
	int *****p5 = &p4;
	int ******p6 = &p5;
	int *******p7 = &p6;
	int ********p8 = &p7;
	int *********p9 = &p8;
	ft_ultimate_ft(&p8);
//	printf("%d",a);	
	ft_putnbr(a);
}
