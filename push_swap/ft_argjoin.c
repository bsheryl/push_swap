/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_argjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsheryl <bsheryl@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 11:13:08 by bsheryl           #+#    #+#             */
/*   Updated: 2021/10/31 15:58:28 by bsheryl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*ft_argjoin(char **str, char *sep)
{
	int		i;
	char	*ret;

	i = 1;
	ret = ft_strdup(str[i++]);
	while (str[i])
	{
		ret = ft_strjoin(ret, sep);
		ret = ft_strjoin(ret, str[i]);
		i++;
	}
	return (ret);
}
