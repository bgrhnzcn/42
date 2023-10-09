/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range_main.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buozcan <buozcan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 19:03:51 by buozcan           #+#    #+#             */
/*   Updated: 2023/09/18 17:33:19 by buozcan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ultimate_range.h"
#include <stdlib.h>
#include <stdio.h>

int	main(void)
{
	int *range;
	int size;
	int i;

	size = ft_ultimate_range(&range, 20, 58);
	printf("%d\n", size);
	i = 0;
	while (i <= size)
	{
		printf("%d\n", range[size - i]);
		i++;
	}
	return (0);
}
