/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgrhnzcn <bgrhnzcn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 14:12:52 by buozcan           #+#    #+#             */
/*   Updated: 2023/10/17 20:19:38 by bgrhnzcn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*substr;
	size_t		index;

	substr = malloc(len);
	if (substr == NULL)
		return (NULL);
	index = 0;
	while (index < len)
	{
		substr[index] = s[start + index];
		index++;
	}
	return (substr);
}
