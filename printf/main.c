# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <stdarg.h>

int	ft_printstr(char *str)
{
	int	i;

	i = 0;
	if (str == NULL)
	{
		ft_printstr("(null)");
		return (6);
	}
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}

size_t	ft_strlen(const char *a)
{
	size_t	i;

	i = 0;
	while (a[i] != '\0')
		i++;
	return (i);
}

int	ft_print_ptr(unsigned long long int i)
{
	char	*lng;
	int		len;

	len = ft_printstr("0x");
	if (i == 0)
		return (len += ft_printstr("0"));
	lng = ft_long_int_to_hex(i);
	len += ft_printstr(lng);
	free(lng);
	return (len);
}

void	ft_reverseit(char *s)
{
	size_t	a;
	size_t	b;
	char	tmp;

	a = 0;
	b = ft_strlen(s);
	while ((b / 2) > a)
	{
		tmp = s[a];
		s[a] = s[b - 1 - a];
		s[b - 1 - a] = tmp;
		a++;
	}
}

char	*ft_long_int_to_hex(unsigned long long int num)
{
	char	*hex_digits;
	char	*hex_str;
	int		i;

	hex_str = malloc(sizeof(char) * 16);
	hex_digits = "0123456789ABCDEF";
	i = 0;
	if (num < 0)
	{
		hex_str[i] = '-';
		i++;
		num *= -1;
	}
	while (num > 0)
	{
		hex_str[i++] = hex_digits[num % 16];
		num /= 16;
	}
	ft_reverseit(hex_str);
	return (hex_str);
}

char	*ft_long_int_to_hex_low(unsigned long long int num)
{
	char	*hex_digits;
	char	*hex_str;
	int		i;

	hex_str = malloc(sizeof(char) * 16);
	hex_digits = "0123456789abcdef";
	i = 0;
	if (num < 0)
	{
		hex_str[i] = '-';
		i++;
		num *= -1;
	}
	while (num > 0)
	{
		hex_str[i++] = hex_digits[num % 16];
		num /= 16;
	}
	ft_reverseit(hex_str);
	return (hex_str);
}

int main()
{
	int a = ft_print_ptr(6723762);
}