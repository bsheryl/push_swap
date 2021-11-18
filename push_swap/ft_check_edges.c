/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_a_b.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsheryl <bsheryl@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 18:37:53 by bsheryl           #+#    #+#             */
/*   Updated: 2021/11/10 19:35:07 by bsheryl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_push_to_sort(t_stack **stack_a, t_stack **stack_b, t_len *tlen)
{
	ft_pa(stack_b, stack_a, tlen, 1);
	(*stack_a)->flag = -1;
	ft_ra(stack_a, 1);
	tlen->ind++;
}

int	ft_check_a(t_stack **stack, t_len *tlen)
{
	if ((*stack)->index == tlen->ind)
	{
		(*stack)->flag = -1;
		ft_ra(stack, 1);
		tlen->ind++;
		return (1);
	}
	if ((*stack)->next->index == tlen->ind)
	{
		ft_sa(stack, 1);
		(*stack)->flag = -1;
		ft_ra(stack, 1);
		tlen->ind++;
		return (1);
	}
	return (0);
}

int	ft_check_b(t_stack **stack_a, t_stack **stack_b, t_len *tlen)
{
	if (tlen->len_b < 3)
		return (0);
	if ((*stack_b)->index == tlen->ind)
	{
		ft_push_to_sort(stack_a, stack_b, tlen);
		return (1);
	}
	if ((*stack_b)->next && (*stack_b)->next->index == tlen->ind
		&& (*stack_a)->next->index == tlen->ind + 1)
	{
		if ((*stack_a)->next->index == tlen->ind + 1)
			ft_ss(stack_a, stack_b, 1);
		else
			ft_sb(stack_b, 1);
		ft_push_to_sort(stack_a, stack_b, tlen);
		return (1);
	}
	if (ft_last_elem(stack_b)->index == tlen->ind && tlen->len_b > 3)
	{
		ft_rrb(stack_b, 1);
		ft_push_to_sort(stack_a, stack_b, tlen);
		return (1);
	}
	return (0);
}

int	ft_check_edges(t_stack **stack_a, t_stack **stack_b, t_len *tlen)
{
	if (tlen->len_b > 3)
	{
		if ((*stack_a)->index == tlen->ind
			&& (*stack_b)->next->index == tlen->ind + 1)
		{
			(*stack_a)->flag = -1;
			ft_rr(stack_a, stack_b, 1);
			tlen->ind++;
			ft_push_to_sort(stack_a, stack_b, tlen);
			return (1);
		}
	}
	if (ft_check_b(stack_a, stack_b, tlen))
		return (1);
	if (tlen->len_b > 3)
	{
		if (ft_check_penult(stack_a, stack_b, tlen))
			return (1);
	}
	if (ft_check_a(stack_a, tlen))
		return (1);
	return (0);
}
