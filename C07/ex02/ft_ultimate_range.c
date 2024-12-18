/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imsbaiti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 22:29:59 by imsbaiti          #+#    #+#             */
/*   Updated: 2024/08/13 22:30:05 by imsbaiti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = malloc(sizeof(int) * (max - min));
	if (*range == NULL )
	{
		*range = NULL;
		return (-1);
	}
	while (min < max)
	{
		(*range)[i] = min;
		min++;
		i++;
	}
	return (i);
}
/*#include<stdio.h>
int main()
{
	int i = 0;
	int *arr;
	int min = 0;
	int max = 11;
	
	ft_ultimate_range(&arr, min ,max);

	while(i < max -min)
	{
		printf("%d\n",arr[i]);
		i++;
	}
	free(arr);
	return 0;
}*/
