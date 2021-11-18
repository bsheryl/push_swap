/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   untils_for_bigstack.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsheryl <bsheryl@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 12:09:13 by bsheryl           #+#    #+#             */
/*   Updated: 2021/11/10 12:10:13 by bsheryl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_max_flag(t_stack **stack)
{
	t_stack	*list;
	int		max;

	list = *stack;
	max = 0;
	while (list->next)
	{
		if (list->flag > max && list->flag >= 0)
			max = list->flag;
		list = list->next;
	}
	return (max);
}

void	ft_flag_2(t_stack **stack_b, t_len *tlen, int *index)
{
	(*stack_b)->flag = -2;
	if (tlen->len_b > 1)
		ft_rb(stack_b, 1);
	(*index)++;
}

int	ft_first_sort(t_stack **stack_a, t_stack **stack_b, int mid, t_len *tlen)
{
	int	index;

	index = 0;
	while (tlen->len_b <= mid)
	{
		if ((*stack_a)->index <= mid)
		{
			ft_pb(stack_a, stack_b, tlen, 1);
			if ((*stack_b)->index == index && (tlen->len_a + tlen->len_b) > 20)
				ft_flag_2(stack_b, tlen, &index);
			if ((*stack_b)->index == index && (tlen->len_a + tlen->len_b) > 20)
				ft_flag_2(stack_b, tlen, &index);
		}
		else
			ft_ra(stack_a, 1);
	}
	return (index);
}

int	ft_get_mid(t_stack **stack)
{
	int	mid;

	mid = ((ft_getmax(stack) - ft_getmin(stack)) / 2) + ft_getmin(stack);
	return (mid);
}

void	ft_push_to_a(t_stack **stack_a, t_stack **stack_b, t_len *tlen)
{
	int	mid;

	while (tlen->len_b > 0)
	{
		if (ft_check_edges(stack_a, stack_b, tlen))
			continue ;
		mid = ft_get_mid(stack_b);
		tlen->flag++;
		while (tlen->len_b > (mid - ft_getmin(stack_b)))
		{
			if (ft_check_edges(stack_a, stack_b, tlen))
				continue ;
			if ((*stack_b)->index >= mid)
			{
				ft_pa(stack_b, stack_a, tlen, 1);
				(*stack_a)->flag = tlen->flag;
			}
			else
				ft_rb(stack_b, 1);
		}
	}
}
