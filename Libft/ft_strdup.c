/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buozcan <buozcan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 15:31:15 by buozcan           #+#    #+#             */
/*   Updated: 2023/10/11 15:31:15 by buozcan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(const char *s)
{
	size_t	i;
	char	*p;

	i = 0;
	p = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (p != NULL)
	{
		while (s[i])
		{
			p[i] = s[i];
			i++;
		}
		p[i] = 0;
	}
	return (p);
}
