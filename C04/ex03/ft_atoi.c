/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imsbaiti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 18:09:00 by imsbaiti          #+#    #+#             */
/*   Updated: 2024/08/06 09:47:52 by imsbaiti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
void ft_putchar(char c)
{
	write(1, &c, 1);
}
void ft_putnbr(int nb)
{
	if (nb == -2147483648)
		write(1,"-2147483648",11);
	else if (nb < 0)
	{
		write(1,"-",1);
		nb = -nb;
		ft_putnbr (nb);
	}
	else if (nb / 10 == 0)
		ft_putchar (nb + 48);
	else
	{
		ft_putnbr (nb / 10);
		ft_putnbr (nb % 10);
	}
}
*/
int	ft_atoi(char *str)
{
	int	i;
	int	res;
	int	signe;

	i = 0;
	res = 0;
	signe = 1;
	while ((str[i] == 32) || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			signe *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - 48);
		i++;
	}
	return (signe * res);
}
/*
int main()
{
	char str []  ="        		-1234ab567";
	//printf("%d",ft_atoi(str));
	ft_putnbr(ft_atoi(str));
}
*/
