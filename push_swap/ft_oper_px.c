/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_oper_p.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsheryl <bsheryl@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 18:08:00 by bsheryl           #+#    #+#             */
/*   Updated: 2021/11/11 12:26:52 by bsheryl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_pa(t_stack **from, t_stack **to, t_len *len1, int put)
{
	t_stack	*tmp;

	if ((*from)->nbr == 0)
		return ;
	tmp = *from;
	if ((*from)->next == 0)
		(*from)->next = ft_newelem(NULL);
	*from = (*from)->next;
	if ((*to)->nbr == 0)
	{
		free(*to);
		tmp->next = 0;
		*to = tmp;
	}
	else
	{
		tmp->next = *to;
		*to = tmp;
	}
	len1->len_a++;
	len1->len_b--;
	if (put)
		ft_putstr_fd("pa\n", 1);
}

void	ft_pb(t_stack **from, t_stack **to, t_len *len1, int put)
{
	t_stack	*tmp;

	if ((*from)->nbr == 0)
		return ;
	tmp = *from;
	if ((*from)->next == 0)
		(*from)->next = ft_newelem(NULL);
	*from = (*from)->next;
	if ((*to)->nbr == 0)
	{
		free(*to);
		tmp->next = 0;
		*to = tmp;
	}
	else
	{
		tmp->next = *to;
		*to = tmp;
	}
	len1->len_a--;
	len1->len_b++;
	if (put)
		ft_putstr_fd("pb\n", 1);
}
