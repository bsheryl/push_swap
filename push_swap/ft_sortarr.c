/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sortarr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsheryl <bsheryl@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 11:55:35 by bsheryl           #+#    #+#             */
/*   Updated: 2021/11/02 16:14:01 by bsheryl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sortarr(int *arr, int len)
{
	int	i;
	int	flag;
	int	tmp;

	flag = 1;
	while (flag != 0)
	{
		flag = 0;
		i = 0;
		while (i < (len - 1))
		{
			if (arr[i] > arr[i + 1])
			{
				tmp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = tmp;
				flag = 1;
			}
			i++;
		}
	}
}
