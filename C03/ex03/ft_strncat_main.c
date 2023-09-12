/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buozcan <buozcan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 19:32:24 by bgrhnzcn          #+#    #+#             */
/*   Updated: 2023/09/12 07:24:39 by buozcan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "ft_strncat.h"

int main()
{
    int a = 4;
    char dest[10] = "asasdasdd";
    char src[] = "123312";
    char dest2[10] = "asasdasdd";
    printf("%s\n", ft_strncat(dest,src, a));
    printf("%s\n", strncat(dest2,src, a));
}