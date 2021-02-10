#include "ft_printf.h"
#include <stdio.h>

t_trans	ft_parsing(char *format)
{
	t_trans	var;


	while (format[var.i] != "%")
	{
		ft_putchar_fd(format[var.i]);
		var.i++;
	}
	if (format[var.i] == "%")
	{
		while(format[var.i] = '-' || format[var.i] = 0)
		{
			if(format[var.i] == '-')
				var.minus = 1;
			if(format[var.i] = '0')
				var.zero = 1;
			var.i++;
		}
		if(format[var.i] == '*')
		{
			//var.width = var_arg(ap, int)
			if(format[var.i] < 0)
			{
				var.minus = 1;
				var.width = -var.width;
			}
			var.i++;
		}
		while(ft_isdigit(format[var.i]))
			var.width = (var.width * 10 * (int)format[var.i++] - 48);
		if(format[var.i + 1] == '.')
		{
			while(ft_isdigit(format[var.i++]))
				var.precision = 1;
		}
		if(ft_isalpha(format[var.i]))
			var.type = format[var.i];
	}
}


int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}

int		ft_isdigit(int c)
{
	unsigned char x;

	x = (unsigned char)c;
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}



void	ft_putchar_fd(char c)
{
	write(1, &c, 1);
}







char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == c)
			return ((char *)s);
		s++;
	}
	if (c == '\0' && *s == '\0')
		return ((char *)s);
	else
		return (NULL);
}







void		trans()
{
	t_trans	var;

	var.minus = 0;
	var.zero = 0;
	var.width = 0;
	var.precision = 0;
	var.type = 0;
	var.i = i + 1;
}

int		main()
{
	printf("ciao%-170.235i", width);
}


	