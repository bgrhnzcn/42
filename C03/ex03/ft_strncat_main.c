/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgrhnzcn <bgrhnzcn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 19:32:24 by bgrhnzcn          #+#    #+#             */
/*   Updated: 2023/09/12 20:24:00 by bgrhnzcn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "ft_strncat.h"

int main()
{
    int a = 5;
    char dest[4] = "";
    char dest2[4] = "";
    char src[] = "123456";
    printf("%s\n", ft_strncat(dest,src, a));
    printf("%s\n", strncat(dest2,src, a));
}