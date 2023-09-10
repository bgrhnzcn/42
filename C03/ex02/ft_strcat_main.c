/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buozcan <buozcan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 19:32:43 by bgrhnzcn          #+#    #+#             */
/*   Updated: 2023/09/10 21:47:37 by buozcan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "ft_strcat.h"

int main()
{
    char dest[6] = "";
    char src[] = "asdfghjkl";
    char dest2[6] = "";
    char src2[] = "asdfghjkl";
    printf("%s\n", ft_strcat(dest,src));
    printf("%s\n", strcat(dest2,src2));
}