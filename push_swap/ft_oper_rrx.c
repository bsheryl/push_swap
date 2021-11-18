/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_oper_rrx.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsheryl <bsheryl@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 18:15:26 by bsheryl           #+#    #+#             */
/*   Updated: 2021/11/11 11:53:16 by bsheryl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rra(t_stack **stack, int put)
{
	t_stack	*tmp;
	t_stack	*list;

	list = *stack;
	while (list->next->next)
		list = list->next;
	tmp = list->next;
	list->next = NULL;
	tmp->next = *stack;
	*stack = tmp;
	if (put)
		ft_putstr_fd("rra\n", 1);
}

void	ft_rrb(t_stack **stack, int put)
{
	t_stack	*tmp;
	t_stack	*list;

	list = *stack;
	while (list->next->next)
		list = list->next;
	tmp = list->next;
	list->next = NULL;
	tmp->next = *stack;
	*stack = tmp;
	if (put)
		ft_putstr_fd("rrb\n", 1);
}

void	ft_rrr(t_stack **stack_a, t_stack **stack_b, int put)
{
	t_stack	*tmp;
	t_stack	*list;

	list = *stack_a;
	while (list->next->next)
		list = list->next;
	tmp = list->next;
	list->next = NULL;
	tmp->next = *stack_a;
	*stack_a = tmp;
	list = *stack_b;
	while (list->next->next)
		list = list->next;
	tmp = list->next;
	list->next = NULL;
	tmp->next = *stack_b;
	*stack_b = tmp;
	if (put)
		ft_putstr_fd("rrr\n", 1);
}
