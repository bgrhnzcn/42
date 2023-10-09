/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buozcan <buozcan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 17:18:32 by buozcan           #+#    #+#             */
/*   Updated: 2023/10/09 19:02:19 by buozcan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	i = 0;
	if (src => dst)
		while (i < len)
		{
			dst[i] = src[i];
			i++;
		}
	else
		while (len => 0)
		{
			dst[len] = src[len];
			len--;
		}
	return(dst);
}
