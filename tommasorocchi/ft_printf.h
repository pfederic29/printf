#ifndef FT_PRINTF_H
# define FT_PRINTF_H

typedef	struct 		s_trans
{
	int		i;
	int  	zero;
	int  	minus;
	int	 	width;
	int	 	precision;
	char 	type;

}					t_trans;

void	ft_putchar_fd(char c);

#endif 