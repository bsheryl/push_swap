/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsheryl <bsheryl@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 18:19:27 by bsheryl           #+#    #+#             */
/*   Updated: 2021/11/09 18:19:27 by bsheryl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_getmax(t_stack **stack)
{
	t_stack	*elem;
	int		max;

	elem = *stack;
	max = elem->index;
	while (elem && elem->flag >= 0)
	{
		if (max < elem->index && elem->flag >= 0)
			max = elem->index;
		elem = elem->next;
	}
	return (max);
}

int	ft_getmin(t_stack **stack)
{
	t_stack	*elem;
	int		min;

	elem = *stack;
	min = elem->index;
	while (elem && elem->flag >= 0)
	{
		if (min > elem->index && elem->flag >= 0)
			min = elem->index;
		elem = elem->next;
	}
	return (min);
}
