/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buozcan <buozcan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 19:32:24 by bgrhnzcn          #+#    #+#             */
/*   Updated: 2023/09/13 15:09:55 by buozcan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "ft_strncat.h"

int main()
{
    int a = -4;
    char src[] = "123456";
    char dest[4] = "";
    printf("%s\n", ft_strncat(dest,src, a));
    char dest2[4] = "";
    printf("%s\n", strncat(dest2,src, a));
}