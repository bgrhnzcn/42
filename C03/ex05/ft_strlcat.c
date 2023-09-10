/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buozcan <buozcan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 20:52:58 by bgrhnzcn          #+#    #+#             */
/*   Updated: 2023/09/10 19:37:38 by buozcan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int	i;
	int	dest_len;
	int src_len;

	src_len = ft_strlen(src);
	if (!size)
		return (src_len);
	dest_len = ft_strlen(dest); 
	dest += dest_len;
	i = 0;
	while (i < (int)size - dest_len - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i + 1] = 0;
	return (dest_len + src_len);
}