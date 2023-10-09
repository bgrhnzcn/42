/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buozcan <buozcan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 14:10:08 by bgrhnzcn          #+#    #+#             */
/*   Updated: 2023/09/11 16:41:25 by buozcan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "ft_strlcpy.h"

int main()
{
    char src[] = "dneme metini";
    char dest[15];
    char src2[] = "dneme metini";
    char dest2[15];
    unsigned int    x = ft_strlcpy(dest, src, (unsigned int)15);
    unsigned int    y = strlcpy(dest2, src2, (unsigned int)15);

    printf("%d\n", x);
    printf("%s\n", dest);
    printf("%d\n", y);
    printf("%s\n", dest2);
}