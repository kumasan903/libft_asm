NAME	= libft.a
AS		= nasm
ASFLAGS	= -f elf64
SRCS	= ft_isalpha.s
OJBS	= $(SRCS:.s=.o)
ARFLAGS	= rcs

all		: $(NAME)

$(NAME)	: $(OJBS)
	$(AR) $(ARFLAGS) $(NAME) $(OJBS)

clean	:
	$(RM) $(OJBS)

fclean	: clean
	$(RM) $(NAME)

re		: fclean all

test	: $(NAME)
	gcc main.c $(NAME)
	./a.out
	@rm -rf ./a.out
