/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imsbaiti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 14:12:52 by imsbaiti          #+#    #+#             */
/*   Updated: 2024/08/01 13:46:48 by imsbaiti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strlowecase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i1;
	int	j;

	ft_strlowecase(str);
	j = 0;
	i1 = 1;
	while (str[j] != '\0')
	{
		if (str[j] >= 'a' && str[j] <= 'z')
		{
			if (i1 == 1)
				str[j] -= 32;
			i1 = 0;
		}
		else if (str[j] >= '0' && str[j] <= '9')
			i1 = 0;
		else
			i1 = 1;
		j++;
	}
	return (str);
}
/*
int main()
{
	char str[] = "yoy hbc 54imad,ooons";
	ft_strcapitalize(str);
	printf("%s",str);
}*/
