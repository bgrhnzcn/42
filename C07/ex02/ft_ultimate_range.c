/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buozcan <buozcan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 19:03:52 by buozcan           #+#    #+#             */
/*   Updated: 2023/09/13 20:24:29 by buozcan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int *temp;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	temp = malloc((max - min) * sizeof(int));
	i = 0;
	while (min + i < max)
	{
		temp[i] = min + i;
		i++;
	}
	*range = temp;
	return (max - min);
}
