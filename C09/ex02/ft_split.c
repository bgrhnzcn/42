/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buozcan <buozcan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 19:36:50 by buozcan           #+#    #+#             */
/*   Updated: 2023/09/21 21:19:32 by buozcan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

typedef struct t_word
{
	char	*first;
	int		lenght;
}t_word;

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_create_substr(char *start, int lenght)
{
	char	*res;
	int		i;

	res = malloc(lenght + 1);
	if (!res)
		return (0);
	i = 0;
	while (start[i])
	{
		res[i] = start[i];
		i++;
	}
}

char	**ft_split(char *str, char *charset)
{
	char	**strs;
	int		i;
}
