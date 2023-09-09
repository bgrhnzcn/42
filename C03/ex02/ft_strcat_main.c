/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgrhnzcn <bgrhnzcn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 19:32:43 by bgrhnzcn          #+#    #+#             */
/*   Updated: 2023/09/09 19:32:46 by bgrhnzcn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_strcat.h"

int main()
{
    char dest[28] = "deneme metini.";
    char src[] = "ekleme metin";
    printf("%s\n", ft_strcat(dest,src));
}