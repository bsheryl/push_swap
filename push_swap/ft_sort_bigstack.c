/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_bigstack.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsheryl <bsheryl@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 18:17:35 by bsheryl           #+#    #+#             */
/*   Updated: 2021/11/11 10:21:24 by bsheryl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_bigstack(t_stack **stack_a, t_stack **stack_b, t_len *tlen)
{
	int	mid;
	int	max_flag;

	mid = ft_getmax(stack_a) / 2 + ft_getmin(stack_a);
	tlen->ind = ft_first_sort(stack_a, stack_b, mid, tlen);
	while (ft_last_elem(stack_b)->flag == -2)
		ft_rrr(stack_a, stack_b, 1);
	while ((*stack_b)->flag == -2)
	{
		ft_pa(stack_b, stack_a, tlen, 1);
		(*stack_a)->flag = -1;
		ft_ra(stack_a, 1);
	}
	while (tlen->ind < tlen->len)
	{
		ft_push_to_a(stack_a, stack_b, tlen);
		max_flag = ft_max_flag(stack_a);
		while ((*stack_a)->flag == max_flag)
		{
			if (ft_check_edges(stack_a, stack_b, tlen))
				continue ;
			ft_pb(stack_a, stack_b, tlen, 1);
		}
	}
}
