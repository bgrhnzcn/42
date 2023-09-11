/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buozcan <buozcan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 20:53:00 by bgrhnzcn          #+#    #+#             */
/*   Updated: 2023/09/11 20:29:53 by buozcan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strlcat.h"
#include <stdio.h>
#include <strings.h>

int main()
{
    char src[] = "12adasdasdasdasdsdasdsad3";
    char dest[20] = "";
    char dest2[20] = "";

    int x = (int) strlcat(dest, src, 20);
    int y = (int) ft_strlcat(dest2, src, 20);
    printf("%s\n", dest);
    printf("%s\n", dest2);
    printf("%d\n", x);
    printf("%d\n", y);
}