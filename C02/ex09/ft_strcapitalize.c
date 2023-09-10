/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buozcan <buozcan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 19:02:29 by buozcan           #+#    #+#             */
/*   Updated: 2023/09/10 21:07:36 by buozcan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_alphanumeric(char c)
{
	if (c <= 'z' && c >= 'a')
		return (1);
	if (c <= 'Z' && c >= 'A')
		return (1);
	if (c <= '9' && c >= '0')
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	if (str[0] <= 'z' && str[0] >= 'a')
		str[0] -= 32;
	i = 1;
	while (str[i])
	{
		if (ft_is_alphanumeric(str[i - 1]) || (str[i] <= '9' && str[i] >= '0'))
		{
			i++;
			continue ;
		}
		if (!ft_is_alphanumeric(str[i]))
		{
			i++;
			continue ;
		}
		str[i] -= 32;
		i++;
	}
	return (str);
}
