/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdiallo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 08:49:23 by fdiallo           #+#    #+#             */
/*   Updated: 2021/02/25 11:54:49 by fdiallo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int ft_ultimate_range(int **range, int min, int max)
{
	int *tab;
	int i; 
	int j;

	if (min >= max)
		return (NULL);
	tab = (int*) malloc(sizeof(int) * (max - min));
	if (tab == NULL)
	return (-1);
	i = min;
	j = 0;
	while (j < max - min)
	{
		tab[j] = i;
		i++;
		j++;
	}
	*range = tab;
	return (i);
}
