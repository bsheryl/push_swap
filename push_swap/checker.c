/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsheryl <bsheryl@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 19:51:07 by bsheryl           #+#    #+#             */
/*   Updated: 2021/11/11 12:45:55 by bsheryl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_next_line(char **line)
{
	int    i;
	int    j;
	char  *buf;

	i = -1;
	buf = (char *)malloc(5);
	j = read(0, &buf[++i], 1);
	while (j > 0 && buf[i] != '\n' && buf[i] != '\0')
		j = read(0, &buf[++i], 1);
	buf[i] = '\0';
	*line = buf;
	return (j);
}

void	ft_do_cmd(t_stack **stack_a, t_stack **stack_b, t_len *tlen, char *cmd)
{
	if (!ft_strncmp(cmd, "rra", 4))
		ft_rra(stack_a, 0);
	else if (!ft_strncmp(cmd, "rrb", 4))
		ft_rrb(stack_b, 0);
	else if (!ft_strncmp(cmd, "rrr", 4))
		ft_rrr(stack_a, stack_b, 0);
	else if (!ft_strncmp(cmd, "sa", 3))
		ft_sa(stack_a, 0);
	else if (!ft_strncmp(cmd, "sb", 3))
		ft_sb(stack_b, 0);
	else if (!ft_strncmp(cmd, "ss", 3))
		ft_ss(stack_a, stack_b, 0);
	else if (!ft_strncmp(cmd, "pa", 3))
		ft_pa(stack_b, stack_a, tlen, 0);
	else if (!ft_strncmp(cmd, "pb", 3))
		ft_pb(stack_a, stack_b, tlen, 0);
	else if (!ft_strncmp(cmd, "ra", 3))
		ft_ra(stack_a, 0);
	else if (!ft_strncmp(cmd, "rb", 3))
		ft_rb(stack_b, 0);
	else if (!ft_strncmp(cmd, "rr", 3))
		ft_rr(stack_a, stack_b, 0);
	else
		ft_puterror();
}

void	ft_do_sort(t_stack **stack_a, t_stack **stack_b, t_len *tlen)
{
	char	*cmd;

	if (stack_a && tlen)
	{
		while (get_next_line(&cmd) > 0)
		{
			ft_do_cmd(stack_a, stack_b, tlen, cmd);
			free(cmd);
		}
		free(cmd);
		if (ft_checksorted(stack_a) && !tlen->len_b)
			ft_putstr_fd("OK\n", 1);
		else
			ft_putstr_fd("KO\n", 1);
	}
}

void	ft_checkerwork(int *arr, int *len)
{
	t_stack	*stack_a;
	t_stack *stack_b;
	t_len	*tlen;

	tlen = ft_create_tlen(len);
	stack_a = ft_newelem(NULL);
	stack_b = ft_newelem(NULL);
	ft_fullstack(&stack_a, arr, len);
	ft_do_sort(&stack_a, &stack_b, tlen);
	ft_freestack(stack_a);
	ft_freestack(stack_b);
	free(tlen);
}

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
		ft_checkerwork(arr, &len);
		free(arr);
	}
	return (0);
}