/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable_main.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buozcan <buozcan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 18:00:46 by buozcan           #+#    #+#             */
/*   Updated: 2023/09/07 18:02:36 by buozcan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_str_is_printable.c"
#include <stdio.h>

int	ft_str_is_printable(char *str);

int main()
{
    char str[] = "me123t Meme.";
    char str1[] = "METIN";
    char str2[] = "";

    printf("%d\n" ,ft_str_is_printable(str));
    printf("%d\n" ,ft_str_is_printable(str1));
    printf("%d\n" ,ft_str_is_printable(str2));
}
