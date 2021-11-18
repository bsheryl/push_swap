/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checksorted.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsheryl <bsheryl@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 18:12:25 by bsheryl           #+#    #+#             */
/*   Updated: 2021/11/11 08:59:18 by bsheryl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_checksorted(t_stack **stack)
{
	t_stack	*list;

	if (!(*stack))
		return (0);
	list = *stack;
	while (list->next)
	{
		if (*(list->nbr) > *(list->next->nbr))
			return (0);
		list = list->next;
	}
	return (1);
}
