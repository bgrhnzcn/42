/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgrhnzcn <bgrhnzcn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 14:10:08 by bgrhnzcn          #+#    #+#             */
/*   Updated: 2023/09/09 17:23:57 by bgrhnzcn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "ft_strlcpy.h"

int main()
{
    char src[] = "dneme metini";
    char dest[15];
    unsigned int    x = ft_strlcpy(dest, src, (unsigned int)5);

    printf("%d\n", x);
    printf("%s\n", dest);
}