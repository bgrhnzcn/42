/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgrhnzcn <bgrhnzcn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 20:51:25 by bgrhnzcn          #+#    #+#             */
/*   Updated: 2023/09/06 00:40:49 by bgrhnzcn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	merge_sort_recursion(int *arr, int left, int right);
void	merge_sort_merge(int *arr, int left, int middle, int right);
int		*create_sub_array(int *arr, int *sub_array, int size, int first);

void	ft_sort_int_tab(int *a, int size)
{
	merge_sort_recursion(a, 0, size - 1);
}

void	merge_sort_recursion(int *arr, int left, int right)
{
	int	middle;

	if (right < left)
		return ;
	middle = left + ((right - left) / 2);
	merge_sort_recursion(arr, left, middle);
	merge_sort_recursion(arr, middle + 1, right);

	merge_sort_merge(arr, left, middle, right);
}

void	merge_sort_merge(int *arr, int left, int middle, int right)
{
	int	temp_l[middle - left + 1];
	int	temp_r[right - middle];
	int	i;

	create_sub_array(arr, temp_l, middle - left + 1, left);
	create_sub_array(arr, temp_r, right - middle, middle +1);
	while ()
	{
		if ()
	}
}

int	*create_sub_array(int *arr, int *sub_array, int size, int first)
{
	int	i;

	i = 0;
	while (i < size)
	{
		sub_array[i] = arr[first + i];
	}
	return (sub_array);
}
