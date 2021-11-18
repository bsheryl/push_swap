/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lastelem.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsheryl <bsheryl@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 18:22:41 by bsheryl           #+#    #+#             */
/*   Updated: 2021/11/09 18:29:11 by bsheryl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ft_last_elem(t_stack **stack)
{
	t_stack	*list;

	list = *stack;
	while (list->next)
		list = list->next;
	return (list);
}
