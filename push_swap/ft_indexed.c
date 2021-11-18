/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_indexed.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsheryl <bsheryl@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 14:01:50 by bsheryl           #+#    #+#             */
/*   Updated: 2021/11/02 14:06:53 by bsheryl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_indexed(t_stack **stack, int *copy, int len)
{
	int		i;
	t_stack	*list;

	list = *stack;
	while (list)
	{
		i = 0;
		while (i < len)
		{
			if (*(list->nbr) == copy[i])
				list->index = i;
			i++;
		}
		list = list->next;
	}
}
