/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgrhnzcn <bgrhnzcn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 20:52:58 by bgrhnzcn          #+#    #+#             */
/*   Updated: 2023/09/10 02:15:02 by bgrhnzcn         ###   ########.fr       */
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
	int	j;
	int	dest_size;
	int src_size;

	src_size = ft_strlen(src);
	if (!size)
		return (src_size);
	dest_size = ft_strlen(dest); 
	dest += dest_size - 1;
	i = 0;
	while (i < size - dest_size -1)
	{
		*dest = src[i];
		i++;
		j++;
	}
	dest[i] = 0;
	return (dest);
}