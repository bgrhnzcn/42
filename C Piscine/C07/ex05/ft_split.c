/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buozcan <buozcan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 19:36:50 by buozcan           #+#    #+#             */
/*   Updated: 2023/09/22 20:25:46 by buozcan          ###   ########.fr       */
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

int	ft_is_sep(char *charset, char c)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_create_substr(char *start, int lenght)
{
	char	*res;
	int		i;

	res = malloc(lenght + 1);
	if (!res)
		return (0);
	i = 0;
	while (i < lenght)
	{
		res[i] = start[i];
		i++;
	}
	res[i] = 0;
	return (res);
}

void	ft_set_var(int *word_lenght, int *i, int *strs_size)
{
	*word_lenght = 0;
	*i = 0;
	*strs_size = 0;
}

char	**ft_split(char *str, char *charset)
{
	char	**strs;
	int		new_word;
	int		i;
	int		strs_size;

	ft_set_var(&word_lenght, &i, &strs_size);
	strs = malloc(ft_strlen(str) * 8);
	if (ft_strlen(charset) == 0)
	{
		strs[0] = str;
		return (strs);
	}
	while (str[i])
	{
		if (ft_is_sep(charset, str[i]))
			new_word = 1;
	return (strs);
}
