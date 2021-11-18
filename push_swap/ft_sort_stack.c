/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsheryl <bsheryl@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 14:21:43 by bsheryl           #+#    #+#             */
/*   Updated: 2021/11/11 10:11:19 by bsheryl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_under_3(t_stack **stack)
{
	int	last;

	while (!ft_checksorted(stack))
	{
		last = *(ft_last_elem(stack))->nbr;
		if (*((*stack)->nbr) > *((*stack)->next->nbr)
			&& *((*stack)->nbr) > last)
			ft_ra(stack, 1);
		else if (*((*stack)->nbr) > *((*stack)->next->nbr))
			ft_sa(stack, 1);
		else if (last < *((*stack)->nbr))
			ft_rra(stack, 1);
		else if (last < *((*stack)->next->nbr))
			ft_rra(stack, 1);
	}
}

int	ft_find_loc(int n, t_stack **stack)
{
	t_stack	*elem;
	int		i;

	i = 0;
	elem = *stack;
	while (elem)
	{
		if (elem->index == n)
			return (i);
		elem = elem->next;
		i++;
	}
	return (0);
}

void	ft_sort_under_5(t_stack **stack_a, t_stack **stack_b, t_len *tlen)
{
	int	min;

	while (tlen->len_a != 3)
	{
		min = ft_getmin(stack_a);
		while ((*stack_a)->index != min)
		{
			if (ft_find_loc(min, stack_a) <= 3)
				ft_ra(stack_a, 1);
			else
				ft_rra(stack_a, 1);
		}
		ft_pb(stack_a, stack_b, tlen, 1);
	}
	ft_sort_under_3(stack_a);
	while (tlen->len_b != 0)
		ft_pa(stack_b, stack_a, tlen, 1);
}

void	ft_sort_stack(t_stack **stack_a, t_len *tlen)
{
	t_stack	*stack_b;

	stack_b = ft_newelem(NULL);
	if (tlen->len_a <= 5 )
	{
		if (tlen->len_a <= 3)
			ft_sort_under_3(stack_a);
		else
			ft_sort_under_5(stack_a, &stack_b, tlen);
	}
	else
		ft_sort_bigstack(stack_a, &stack_b, tlen);
	ft_freestack(stack_b);
}
