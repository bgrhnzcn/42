/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buozcan <buozcan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 18:41:09 by buozcan           #+#    #+#             */
/*   Updated: 2023/09/07 18:43:08 by buozcan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_char_is_upper(char c)
{
	if (c <= 'Z' && c >= 'A')
		return (1);
	return (0);
}

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (ft_char_is_upper(str[i]))
			str[i] += 32;
		i++;
	}
	return (str);
}
