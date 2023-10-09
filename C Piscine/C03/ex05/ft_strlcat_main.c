/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buozcan <buozcan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 20:53:00 by bgrhnzcn          #+#    #+#             */
/*   Updated: 2023/09/13 17:10:25 by buozcan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strlcat.h"
#include <stdio.h>
#include <string.h>

int main()
{
    char src[] = "123";
    char dest[7] = "qwerty";
    unsigned int x;
    unsigned int y;
    char dest2[7] = "qwerty";

    y = ft_strlcat(dest2, src, 3);
    printf("%s\n", dest2);
    printf("%d\n", y);
    x = (int) strlcat(dest, src, 3);
    printf("%s\n", dest);
    printf("%d\n", x);
}
