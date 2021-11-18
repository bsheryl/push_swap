/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stackwork.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsheryl <bsheryl@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 16:08:32 by bsheryl           #+#    #+#             */
/*   Updated: 2021/11/11 12:07:09 by bsheryl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_len	*ft_create_tlen(int *len)
{
	t_len	*tlen;

	tlen = malloc(sizeof(t_len));
	if (!tlen)
		return (0);
	tlen->len_a = *len;
	tlen->len_b = 0;
	tlen->ind = 0;
	tlen->flag = 0;
	tlen->len = *len;
	return (tlen);
}

void	ft_stackwork(int *arr, int *len)
{
	int		*copy;
	t_stack	*stack_a;
	t_len	*tlen;
	int		i;

	tlen = ft_create_tlen(len);
	i = 0;
	copy = malloc(sizeof(int) * (*len));
	while (i < (*len))
	{
		copy[i] = arr[i];
		i++;
	}
	stack_a = ft_newelem(NULL);
	ft_fullstack(&stack_a, arr, len);
	ft_sortarr(copy, *len);
	ft_indexed(&stack_a, copy, *len);
	ft_sort_stack(&stack_a, tlen);
	ft_freestack(stack_a);
	free(tlen);
	free(copy);
}
