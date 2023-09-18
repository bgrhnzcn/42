/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buozcan <buozcan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 16:37:24 by buozcan           #+#    #+#             */
/*   Updated: 2023/09/18 18:51:54 by buozcan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"

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
	if (p != 0)
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

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int					i;
	struct s_stock_str	*storage;

	storage = malloc(ac * sizeof (struct s_stock_str));
	if (!storage)
		return (0);
	i = 0;
	while (i < ac)
	{
		storage[i].size = ft_strlen(av[i]);
		storage[i].str = av[i];
		storage[i].copy = ft_strdup(av[i]);
		i++;
	}
	storage[i].str = 0;
	return (storage);
}
