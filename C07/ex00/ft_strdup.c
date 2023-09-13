/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buozcan <buozcan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 18:33:27 by buozcan           #+#    #+#             */
/*   Updated: 2023/09/13 18:44:29 by buozcan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*p;

	i = 0;
	p = malloc((ft_strlen(src) + 1) * sizeof(char));
	if (p != NULL)
	{
		while (src[i])
		{
			p[i] = src[i];
			i++;
		}
		p[i] = 0;
	}
	return (p);
}
