/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgrhnzcn <bgrhnzcn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 20:53:00 by bgrhnzcn          #+#    #+#             */
/*   Updated: 2023/09/09 23:12:00 by bgrhnzcn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strlcat.h"
#include <stdio.h>
#include <strings.h>

int main()
{
    char src[] = "metin src";
    char dest[] = "metin dest";

    int x = (int) strlcat(dest,src,0);
    printf("%d\n", x);
}