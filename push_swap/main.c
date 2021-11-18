.//*
 * ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsheryl <bsheryl@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 19:00:01 by bsheryl           #+#    #+#             */
/*   Updated: 2021/11/11 11:40:39 by bsheryl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	int	*arr;
	int	len;
	int	i;

	i = -1;
	len = 0;
	if (argc == 1)
		ft_puterror();
	if (argc > 1)
	{
		while (argv[++i])
		{
			if (argv[i][0] == '\0')
				ft_puterror();
		}
		if (argc > 2)
			argv[1] = ft_argjoin(argv, " ");
		arr = ft_argconv(argv[1], &len);
		ft_stackwork(arr, &len);
		free(arr);
	}
	return (0);
}
