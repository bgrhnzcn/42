/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buozcan <buozcan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 18:45:55 by buozcan           #+#    #+#             */
/*   Updated: 2023/09/18 17:33:14 by buozcan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*p;
	int	i;

	if (min >= max)
		return (0);
	p = malloc((max - min) * sizeof(int));
	if (p != 0)
	{
		i = 0;
		while (i < (max - min))
		{
			p[i] = min + i;
			i++;
		}
	}
	return (p);
}
