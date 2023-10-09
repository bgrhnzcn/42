/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase_main.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buozcan <buozcan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 18:41:47 by buozcan           #+#    #+#             */
/*   Updated: 2023/09/07 18:43:09 by buozcan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strlowcase.c"
#include <stdio.h>

char	*ft_strlowcase(char *str);

int main()
{
    char str[] = "me123t Meme.";
    char str1[] = "METIN";
    char str2[] = "";

    ft_strlowcase(str);
    printf("%s\n" ,str);

    ft_strlowcase(str1);
    printf("%s\n" ,str1);
    
    ft_strlowcase(str2);
    printf("%s\n" ,str2);
}
