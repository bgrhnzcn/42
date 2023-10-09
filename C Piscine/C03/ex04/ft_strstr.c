/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buozcan <buozcan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 19:49:07 by bgrhnzcn          #+#    #+#             */
/*   Updated: 2023/09/11 20:21:28 by buozcan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;

	i = 0;
	if (!*to_find)
		return (str);
	while (*str)
	{
		if (*str == to_find[i])
		{
			while (to_find[i])
			{
				if (str[i] != to_find[i])
				{
					i = 0;
					break ;
				}
				i++;
			}
			if (i)
				return (str);
		}
		str++;
	}
	return (0);
}
