/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgrhnzcn <bgrhnzcn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 20:53:00 by bgrhnzcn          #+#    #+#             */
/*   Updated: 2023/09/13 01:20:17 by bgrhnzcn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strlcat.h"
#include <stdio.h>
#include <string.h>
#include <bsd/string.h>

int main()
{
    char src[] = "123";
    char dest[6] = "qwe";
    char dest2[6] = "qwe";

    int y = ft_strlcat(dest2, src, 5);
    printf("%s\n", dest2);
    printf("%d\n", y);
    int x = (int) strlcat(dest, src, 5);
    printf("%s\n", dest);
    printf("%d\n", x);
}