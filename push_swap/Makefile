NAME	=	push_swap

CHECKER	=	checker

SRC		=	main.c
SRCS	=	ft_argconv.c		ft_argjoin.c	ft_atoi_swap.c\
			ft_check_edges.c	ft_check_input.c	ft_check_penult.c\
			ft_checksorted.c	ft_freestack.c	ft_fullstack.c\
			ft_get.c			ft_last_elem.c	ft_oper_rrx.c\
			ft_indexed.c		ft_newelem.c	ft_oper_px.c\
			ft_oper_rx.c		ft_oper_sx.c	ft_puterror.c\
			ft_sort_bigstack.c	ft_sort_stack.c	ft_sortarr.c\
			ft_stackwork.c		utils_for_bigstack.c
SRC_CHECKER	=	checker.c

HEADER	=	push_swap.h

OBJ		=	$(SRC:%.c=%.o)
OBJ_CHECKER	=	$(SRC_CHECKER:%.c=%.o)
OBJS	=	$(SRCS:%.c=%.o)
CC		=	gcc

LIB		= 	-L. -lft

CFLAGS	=	-Wall -Wextra -Werror -I$(HEADER)

.PHONY	:	all clean fclean re

all		:	$(NAME) $(CHECKER)

$(NAME)	:	$(OBJ) $(OBJS) $(HEADER)
	$(CC) $(LIB) $(CFLAGS) $(OBJ) $(OBJS) -o $(NAME)

$(CHECKER)	:	$(OBJ_CHECKER) $(OBJS) $(HEADER)
	$(CC) $(LIB) $(CFLAGS) $(OBJ_CHECKER) $(OBJS) -o $(CHECKER)

%.o : %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean	:
	@rm -f $(OBJ) $(OBJ_CHECKER) $(OBJS)

fclean	:	clean
	@$(RM) $(NAME) $(CHECKER)

re		:	fclean all
