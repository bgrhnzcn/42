/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab_main.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgrhnzcn <bgrhnzcn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 19:20:19 by bgrhnzcn          #+#    #+#             */
/*   Updated: 2023/09/05 19:25:54 by bgrhnzcn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_rev_int_tab.c"

int main(void)
{
    int arr[7] = {1,2,3,4,5,6,7};
    ft_rev_int_tab(arr, 7);
    int i = 0;
    while (i < 7)
    {
        printf("%d\n", arr[i]);
        i++;
    }
}