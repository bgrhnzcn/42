/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgrhnzcn <bgrhnzcn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 12:28:06 by bgrhnzcn          #+#    #+#             */
/*   Updated: 2023/10/16 13:41:30 by bgrhnzcn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *strnstr(const char *big, const char *little, size_t len)
{
    size_t  i;
    size_t  lsize;

    lsize = ft_strlen(little);
    if (lsize == 0)
        return ((char *)big);
    i = 0;
    while (i < len)
    {
        if (ft_strncmp(&big[i], little, lsize) == 0)
            return ((char *)&big[i]);
        i++;
    }
    return (NULL);
}
