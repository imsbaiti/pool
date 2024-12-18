/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imsbaiti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 22:29:25 by imsbaiti          #+#    #+#             */
/*   Updated: 2024/08/13 22:29:30 by imsbaiti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*arr;
	int	size;

	i = 0;
	if (min >= max)
	{
		return (0);
	}
	size = max - min;
	arr = (int *)malloc(sizeof(int) * size);
	while (min < max)
	{
		arr[i] = min;
		min++;
		i++;
	}
	return (arr);
}
/*#include<stdio.h>
int main()
{
	int i = 0;
	int *arr;
	int min = 0;
	int max = 11;
	
	arr= ft_range(min ,max);

	while(i < max -min)
	{
		printf("%d\n",arr[i]);
		i++;
	}
	free(arr);
	return 0;
}*/
