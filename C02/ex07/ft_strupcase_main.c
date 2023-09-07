/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase_main.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buozcan <buozcan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 18:12:47 by buozcan           #+#    #+#             */
/*   Updated: 2023/09/07 18:39:56 by buozcan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strupcase.c"
#include <stdio.h>

char	*ft_strupcase(char *str);

int main()
{
    char str[] = "me123t Meme.";
    char str1[] = "METIN";
    char str2[] = "";

    ft_strupcase(str);
    printf("%s\n" ,str);

    ft_strupcase(str1);
    printf("%s\n" ,str1);
    
    ft_strupcase(str2);
    printf("%s\n" ,str2);
}
