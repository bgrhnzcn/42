/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buozcan <buozcan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 17:48:42 by buozcan           #+#    #+#             */
/*   Updated: 2023/09/07 17:50:41 by buozcan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_char_is_lower(char c)
{
	if ((c <= 'z' && c >= 'a'))
		return (1);
	return (0);
}

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!ft_char_is_lower(str[i]))
			return (0);
		i++;
	}
	return (1);
}
