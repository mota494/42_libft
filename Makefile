all:
	make -C ft_printf/
	make -C libft/
	make -C gnl/

clean:
	make -C ft_printf/ clean
	make -C libft/ clean
	make -C gnl/ clean

fclean:
	make -C ft_printf/ fclean
	make -C libft/ fclean
	make -C gnl/ fclean

