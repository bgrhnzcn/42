/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab_main.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buozcan <buozcan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 01:12:42 by bgrhnzcn          #+#    #+#             */
/*   Updated: 2023/09/06 20:35:15 by buozcan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_sort_int_tab.c"

void	ft_sort_int_tab(int *a, int size);


int main(void)
{
    int size = 12;
    int arr[size];
    int values;

    int array[] = {4,11,547,6783,132,567,246,235,468,235,46,235};
    values = 18;
    for (int i = 0; i < size; i++)
    {
        arr[i] = values;
        values--;
    }

    for (int i = 0; i < size; i++)
    {
        printf("%d, ", array[i]);
    }
    printf("\n");
    
    ft_sort_int_tab(array, size);

    for (int i = 0; i < size; i++)
    {
        printf("%d, ", array[i]);
    } 
}