/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buozcan <buozcan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 20:52:58 by bgrhnzcn          #+#    #+#             */
/*   Updated: 2023/09/12 02:49:30 by buozcan          ###   ########.fr       */
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
	unsigned int	i;
	unsigned int	dest_len;
	unsigned int	src_len;

	src_len = ft_strlen(src);
	if (size <= dest_len)
		return (src_len + size);
	dest_len = ft_strlen(dest);
	dest += dest_len;
	i = 0;
	while (i < size - dest_len - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (dest_len + src_len);
}
