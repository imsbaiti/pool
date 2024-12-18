/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imsbaiti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 11:35:15 by imsbaiti          #+#    #+#             */
/*   Updated: 2024/07/24 12:15:36 by imsbaiti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	int	i;

	i = 'z';
	while (i <= 'z' && i >= 'a')
	{
		write(1, &i, 1);
		i--;
	}
}
/*
int main()
{
	ft_print_reverse_alphabet();
}*/
