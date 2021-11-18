/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_penult.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsheryl <bsheryl@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 10:15:38 by bsheryl           #+#    #+#             */
/*   Updated: 2021/11/10 10:21:34 by bsheryl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ft_penult(t_stack **stack)
{
	t_stack	*list;

	list = *stack;
	while (list->next->next)
		list = list->next;
	return (list);
}

t_stack	*ft_prepenult(t_stack **stack)
{
	t_stack	*list;

	list = *stack;
	while (list->next->next->next)
		list = list->next;
	return (list);
}

int	ft_check_penult(t_stack **stack_a, t_stack **stack_b, t_len *tlen)
{
	if (ft_penult(stack_b)->index == tlen->ind)
	{
		ft_rrb(stack_b, 1);
		ft_rrb(stack_b, 1);
		ft_push_to_sort(stack_a, stack_b, tlen);
		return (1);
	}
	if (tlen->len_b > 5)
	{
		if (ft_prepenult(stack_b)->index == tlen->ind)
		{
			ft_rrb(stack_b, 1);
			ft_rrb(stack_b, 1);
			ft_rrb(stack_b, 1);
			ft_push_to_sort(stack_a, stack_b, tlen);
			return (1);
		}
	}
	return (0);
}
