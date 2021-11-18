/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_argconv.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsheryl <bsheryl@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 13:41:31 by bsheryl           #+#    #+#             */
/*   Updated: 2021/11/11 11:42:54 by bsheryl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*ft_argconv(char *argv, int *len)
{
	int		count;
	char	**strs;
	int		*arr;

	strs = ft_split(argv, ' ');
	if (!strs)
		ft_puterror();
	while (strs[*len])
		(*len)++;
	arr = malloc(sizeof(int) * (*len));
	if (!arr)
		ft_puterror();
	count = 0;
	while (count < (*len))
	{
		arr[count] = ft_atoi_swap(strs[count]);
		free(strs[count]);
		count++;
	}
	free(strs);
	ft_check_repeat(arr, len);
	ft_check_sort(arr);
	return (arr);
}
