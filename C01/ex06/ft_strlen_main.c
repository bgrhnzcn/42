/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buozcan <buozcan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 21:46:49 by buozcan           #+#    #+#             */
/*   Updated: 2023/09/04 21:48:28 by buozcan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strlen.c"
#include <stdio.h>

int main(void)
{
    char str[] = "metin";

    printf("Lenght: %d", ft_strlen(str));
}