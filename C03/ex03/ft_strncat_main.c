/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgrhnzcn <bgrhnzcn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 19:32:24 by bgrhnzcn          #+#    #+#             */
/*   Updated: 2023/09/09 19:36:27 by bgrhnzcn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_strncat.h"

int main()
{
    char dest[28] = "deneme metini.";
    char src[] = "ekleme metin";
    printf("%s\n", ft_strncat(dest,src, 5));
}