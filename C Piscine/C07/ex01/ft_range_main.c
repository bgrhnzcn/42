/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range_main.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buozcan <buozcan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 18:45:49 by buozcan           #+#    #+#             */
/*   Updated: 2023/09/13 19:08:14 by buozcan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_range.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	int	min;
	int	max;
	int	i;
	int	*range;

	min = 20;
	max = 10;
	range = ft_range(min, max);
	i = 0;
	printf("%p\n", range);
	while (i < max - min)
	{
		printf("%d\n", range[i]);
		i++;
	}
	free(range);
	return (0);
}