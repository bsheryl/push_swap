/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_oper_s.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsheryl <bsheryl@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 13:29:46 by bsheryl           #+#    #+#             */
/*   Updated: 2021/11/11 10:03:09 by bsheryl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sa(t_stack **stack, int put)
{
	t_stack	*tmp;

	if ((*stack)->next == 0)
		return ;
	tmp = *stack;
	*stack = (*stack)->next;
	tmp->next = (*stack)->next;
	(*stack)->next = tmp;
	if (put)
		ft_putstr_fd("sa\n", 1);
}

void	ft_sb(t_stack **stack, int put)
{
	t_stack	*tmp;

	if ((*stack)->next == 0)
		return ;
	tmp = *stack;
	*stack = (*stack)->next;
	tmp->next = (*stack)->next;
	(*stack)->next = tmp;
	if (put)
		ft_putstr_fd("sb\n", 1);
}

void	ft_ss(t_stack **stack_a, t_stack **stack_b, int put)
{
	t_stack	*tmp;

	if ((*stack_a)->next == 0)
		return ;
	else
	{
		tmp = *stack_a;
		*stack_a = (*stack_a)->next;
		tmp->next = (*stack_a)->next;
		(*stack_a)->next = tmp;
	}
	if ((*stack_b)->next == 0)
		return ;
	else
	{
		tmp = *stack_b;
		*stack_b = (*stack_b)->next;
		tmp->next = (*stack_b)->next;
		(*stack_b)->next = tmp;
	}
	if (put)
		ft_putstr_fd("ss\n", 1);
}
