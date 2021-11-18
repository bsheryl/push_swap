/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_input.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsheryl <bsheryl@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 12:33:52 by bsheryl           #+#    #+#             */
/*   Updated: 2021/11/11 11:44:04 by bsheryl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_check_repeat(int *arr, int *len)
{
	int	i;
	int	j;

	i = 0;
	while (i + 1 < *len)
	{
		j = i + 1;
		while (j < *len)
		{
			if (arr[i] == arr[j])
				ft_puterror();
			j++;
		}
		i++;
	}
}

void	ft_check_sort(int *arr)
{
	int	flag;
	int	i;

	i = 0;
	flag = 0;
	while (arr[i + 1])
	{
		if (arr[i] > arr[i + 1])
			flag = 1;
		i++;
	}
	if (flag == 0)
		exit(0);
}
