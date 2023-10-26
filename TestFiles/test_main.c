/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buozcan <buozcan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 15:19:57 by buozcan           #+#    #+#             */
/*   Updated: 2023/10/26 15:21:24 by buozcan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	mapi(unsigned int i, char c)
{
	static int indexArray[11] = {0};

	if (i > 10 || indexArray[i] == 1)
		write(1, "wrong index\n", 12);
	else
		indexArray[i] = 1;
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	else if (c >= 'A' && c <= 'Z')
		return (c + 32);
	else
		return (c);
}

static int	ft_count_words(char const *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != 0)
			count++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (count);
}

static int	ft_wordlenght(const char *str, char c)
{
	int	i;

	i = 0;
	while (str[i] != c && str[i])
		i++;
	return (i);
}

int main()
{
	//printf("%s\n", ft_strjoin("", "sss"));
//
	//printf("%d\n", ft_wordlenght("  deneme  ", ' '));
//
	//printf("%d\n", ft_atoi("-25729"));
//
	//printf("%s\n", ft_itoa(101));
	//char *str = "LoReM iPsUm";
	//char *res = ft_strmapi(str, &mapi);
	//printf("%s\n", res);
	//Linked_List_Test
	//int i = 0;
	//t_list *first = ft_lstnew(&i);
	//while (i < 10)
	//{
	//	i++;
	//	t_list *temp = ft_lstnew(&i);
	//	ft_lstadd_back(&first, temp);
	//}
	//t_list *temp = first;
	//i = 0;
	//int size = ft_lstsize(first);
	//while (i < size)
	//{
	//	int value = *((int *) temp->content);
	//	printf("%i\n", value);
	//	temp = temp->next;
	//	i++;
	//}


	//Memset_Test
	int a[] = {0,56,42};
	ft_memset((((void *)a) + 3), 255, 1);
	ft_memset(((void *)a), 0, 1);
	ft_memset((((void *)a) + 1), 255, 1);
	ft_memset((((void *)a) + 2), 255, 1);
	printf("%i\n", a[0]);
}

