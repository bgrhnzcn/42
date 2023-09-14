/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buozcan <buozcan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 18:19:36 by buozcan           #+#    #+#             */
/*   Updated: 2023/09/14 19:25:39 by buozcan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		k;
	char	*res;

	i = 0;
	k = 0;
	if (!size)
		return ((char *)malloc(0));
	res = malloc(sizeof(strs));
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			res[k++] = strs[i][j++];
		j = 0;
		if (i == size - 1)
			break ;
		while (sep[j])
			res[k++] = sep[j++];
		i++;
	}
	return (res);
}
