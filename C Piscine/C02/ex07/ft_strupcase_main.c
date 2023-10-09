/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase_main.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgrhnzcn <bgrhnzcn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 18:12:47 by buozcan           #+#    #+#             */
/*   Updated: 2023/09/09 17:21:57 by bgrhnzcn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strupcase.h"
#include <stdio.h>

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
