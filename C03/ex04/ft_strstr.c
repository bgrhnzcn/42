/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgrhnzcn <bgrhnzcn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 19:49:07 by bgrhnzcn          #+#    #+#             */
/*   Updated: 2023/09/09 20:40:04 by bgrhnzcn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;

	i = 0;
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
	return NULL;
}
