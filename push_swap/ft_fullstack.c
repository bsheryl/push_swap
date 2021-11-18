/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fullstack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsheryl <bsheryl@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 16:09:35 by bsheryl           #+#    #+#             */
/*   Updated: 2021/11/02 14:50:12 by bsheryl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_fullstack(t_stack **stack, int *arr, int *len)
{
	int		i;
	t_stack	*list;

	i = 0;
	if ((*stack)->nbr == NULL)
		(*stack)->nbr = &arr[i];
	list = *stack;
	i++;
	while (i < *len)
	{
		list->next = ft_newelem(&arr[i]);
		list = list->next;
		i++;
	}
}
