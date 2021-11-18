/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsheryl <bsheryl@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 14:45:48 by bsheryl           #+#    #+#             */
/*   Updated: 2021/11/11 11:46:44 by bsheryl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h> // for debug
# include "./libft/libft.h"

typedef struct s_stack
{
	int				*nbr;
	int				index;
	int				flag;
	struct s_stack	*next;
}	t_stack;

typedef struct s_len
{
	int	len_a;
	int	len_b;
	int	ind;
	int	flag;
	int	len;
}	t_len;

int		main(int argc, char **argv);
int		ft_atoi_swap(const char *str);
int		ft_checksorted(t_stack **stack);
int		ft_getmin(t_stack **stack);
int		ft_getmax(t_stack **stack);
int		ft_find_loc(int n, t_stack **stack);
int		ft_max_flag(t_stack **stack);
int		ft_check_a(t_stack **stack, t_len *tlen);
int		ft_check_b(t_stack **stack_a, t_stack **stack_b, t_len *tlen);
int		ft_check_edges(t_stack **stack_a, t_stack **stack_b, t_len *tlen);
int		ft_first_sort(t_stack **stack_a, t_stack **stack_b, int mid,
			t_len *tlen);
int		ft_get_mid(t_stack **stack);
int		ft_check_penult(t_stack **stack_a, t_stack **stack_b, t_len *tlen);

int		*ft_argconv(char *argv, int *len);

char	*ft_argjoin(char **str, char *sep);

t_len	*ft_create_tlen(int *len);

t_stack	*ft_newelem(int *nbr);
t_stack	*ft_last_elem(t_stack **stack);
t_stack	*ft_prepenult(t_stack **stack);
t_stack	*ft_penult(t_stack **stack);

void	ft_check_repeat(int *arr, int *len);
void	ft_check_sort(int *arr);
void	ft_freestack(t_stack *stack);
void	ft_fullstack(t_stack **stack, int *arr, int *len);
void	ft_indexed(t_stack **stack, int *copy, int len);
void	ft_pa(t_stack **from, t_stack **to, t_len *tlen, int put);
void	ft_pb(t_stack **from, t_stack **to, t_len *tlen, int put);
void	ft_ra(t_stack **stack, int put);
void	ft_rb(t_stack **stack, int put);
void	ft_rr(t_stack **stack_a, t_stack **stack_b, int put);
void	ft_rra(t_stack **stack, int put);
void	ft_rrb(t_stack **stack, int put);
void	ft_rrr(t_stack **stack_a, t_stack **stack_b, int put);
void	ft_sa(t_stack **stack, int put);
void	ft_sb(t_stack **stack, int put);
void	ft_ss(t_stack **stack_a, t_stack **stack_b, int put);
void	ft_puterror(void);
void	ft_sort_bigstack(t_stack **stack_a, t_stack **stack_b, t_len *tlen);
void	ft_sort_under_3(t_stack **stack);
void	ft_sort_under_5(t_stack **stack_a, t_stack **stack_b, t_len *tlen);
void	ft_sort_stack(t_stack **stack_a, t_len *tlen);
void	ft_sortarr(int *arr, int len);
void	ft_stackwork(int *arr, int *len);
void	ft_push_to_sort(t_stack **stack_a, t_stack **stack_b, t_len *tlen);
void	ft_flag_2(t_stack **stack_b, t_len *len, int *index);
void	ft_push_to_a(t_stack **stack_a, t_stack **stack_b, t_len *tlen);

int		main(int argc, char **argv);
int		get_next_line(char **line);
void	ft_checkerwork(int *arr, int *len);
void	ft_do_sort(t_stack **stack_a, t_stack **stack_b, t_len *tlen);
void	ft_do_cmd(t_stack **stack_a, t_stack **stack_b, t_len *tlen, char *cmd);

#endif