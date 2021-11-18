/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_oper_r.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsheryl <bsheryl@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 20:37:45 by bsheryl           #+#    #+#             */
/*   Updated: 2021/11/09 18:12:38 by bsheryl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_ra(t_stack **stack, int put)
{
	t_stack	*tmp;
	t_stack	*list;

	tmp = *stack;
	*stack = (*stack)->next;
	list = *stack;
	while (list->next)
		list = list->next;
	tmp->next = 0;
	list->next = tmp;
	if (put)
		ft_putstr_fd("ra\n", 1);
}

void	ft_rb(t_stack **stack, int put)
{
	t_stack	*tmp;
	t_stack	*list;

	tmp = *stack;
	*stack = (*stack)->next;
	list = *stack;
	while (list->next)
		list = list->next;
	tmp->next = 0;
	list->next = tmp;
	if (put)
		ft_putstr_fd("rb\n", 1);
}

void	ft_rr(t_stack **stack_a, t_stack **stack_b, int put)
{
	t_stack	*tmp;
	t_stack	*list;

	tmp = *stack_a;
	*stack_a = (*stack_a)->next;
	list = *stack_a;
	while (list->next)
		list = list->next;
	tmp->next = 0;
	list->next = tmp;
	tmp = *stack_b;
	*stack_b = (*stack_b)->next;
	list = *stack_b;
	while (list->next)
		list = list->next;
	tmp->next = 0;
	list->next = tmp;
	if (put)
		ft_putstr_fd("rr\n", 1);
}
