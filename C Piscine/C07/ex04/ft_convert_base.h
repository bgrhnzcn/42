/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buozcan <buozcan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 19:49:39 by buozcan           #+#    #+#             */
/*   Updated: 2023/09/18 12:41:59 by buozcan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_convert_base.c"

char	*ft_convert_base(char *nbr, char *base_from, char *base_to);
int		ft_atoi_base(char *str, char *base);
int		ft_check_num_base(char *str, char *base, int base_value, int size);
int		ft_ascii_to_int(char c, char *base);
int		ft_is_ignored(char c);
int		ft_search_char(char c, char *base);
void	ft_putnbr_base(int nbr, char *base);
int		ft_str_base(int nbr, char *result, char *base);
int		ft_is_base_correct(char *base);
int		ft_digit(int nbr);