/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsheryl <bsheryl@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 12:37:57 by bsheryl           #+#    #+#             */
/*   Updated: 2021/11/02 09:15:35 by bsheryl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_atoi_swap(const char *str)
{
	int			i;
	int			neg;
	long long	res;

	i = 0;
	res = 0;
	neg = 1;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg *= -1;
		i++;
	}
	if (!(str[i] >= '0' && str[i] <= '9'))
		ft_puterror();
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + neg * (str[i] - 48);
		i++;
		if (res > 2147483647 || res < -2147483648)
			ft_puterror();
	}
	if (!(str[i] >= '0' && str[i] <= '9') && str[i] != '\0')
		ft_puterror();
	return (res);
}
