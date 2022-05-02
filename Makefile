NAME	=	libftprintf.a

SRCS	=	ft_printf.c\
			ft_print_c.c\
			ft_print_s.c\
			ft_print_i.c\
			ft_print_x.c\
			ft_print_xup.c\
			ft_print_p.c\
			ft_print_u.c\
			ft_puthex.c

HEADER	= 	ft_printf.h

OBJS	=	$(patsubst %.c,%.o,$(SRCS))

CC		=	gcc
CFLAGS	=	-Wall -Wextra -Werror -I$(HEADER)

all		:	$(NAME)

$(NAME)	:	$(OBJS) $(HEADER)
		$(MAKE) -C libft
		cp libft/libft.a $(NAME)
		ar rcs $(NAME) $?

%.o		:	%.c $(HEADER)
		$(CC) $(CFLAGS) -c $< -o $@

clean	:
		$(MAKE) -C libft clean
		@rm -f $(OBJS)

fclean	:	clean
		$(MAKE) -C libft fclean
		@$(RM) $(NAME)

re		:	fclean all

.PHONY	:	all clean fclean re
