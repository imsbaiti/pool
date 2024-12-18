/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imsbaiti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 16:00:45 by imsbaiti          #+#    #+#             */
/*   Updated: 2024/07/29 16:11:01 by imsbaiti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int main()
{
	int a = 6;
	int b = 3;
	int div;
	int mod;
	ft_div_mod(a,b,&div,&mod);
	printf("div ====>%d",div);
	printf("mod ===> %d",mod);
}
*/
