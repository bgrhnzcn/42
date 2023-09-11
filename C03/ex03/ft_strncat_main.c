/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buozcan <buozcan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 19:32:24 by bgrhnzcn          #+#    #+#             */
/*   Updated: 2023/09/11 20:15:31 by buozcan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "ft_strncat.h"

int main()
{
    int a = 4;
    char dest[5] = "asd";
    char src[] = "";
    char dest2[5] = "asd";
    printf("%s\n", ft_strncat(dest,src, a));
    printf("%s\n", strncat(dest2,src, a));
    char* pc = dest - 1;
    char* pc2 = dest2 - 1;
    printf("%c\n", *pc);
    printf("%c\n", *pc2);
}