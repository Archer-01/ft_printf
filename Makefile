# ****************************** Compiler Options ******************************
CC		:= cc
CFLAGS	:= -Wall -Wextra -Werror

# ******************************* Other commands *******************************
RM	:= rm -f
AR	:= ar rcs

# ******************************** Directories *********************************
INCLUDE_DIR	:= include
SRC_DIR		:= src

# *********************************** Files ************************************
NAME	:= libftprintf.a
SRCS	:= ft_printf.c ft_parse_conversion.c ft_putchar.c ft_putstr.c \
			ft_strlen.c ft_putaddr_hex.c ft_putnbr.c ft_putnbr_unsigned.c \
			ft_putnbr_hex.c
OBJS	:= $(SRCS:.c=.o)

# ********************************** Targets ***********************************
all:	$(NAME)

$(NAME):	$(OBJS)
			$(AR) $(NAME) $?

%.o:	$(SRC_DIR)/%.c
		$(CC) -c $(CFLAGS) -I $(INCLUDES_DIR) -c -o $@ $<

.c.o:
		$(CC) -c $(CFLAGS) -I $(INCLUDES_DIR) -c -o $@ $<
clean:
	$(RM) $(OBJS)

fclean:	clean
		$(RM) $(NAME)

re:	fclean all

.PHONY:	all clean fclean re
