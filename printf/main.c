#include "stdarg.h"
#include "stdio.h"
#include "unistd.h"
#include "stdlib.h"

void	topla(int n, ...)
{
	va_list	ap;
	int	i;
	int	toplam;

	i = 0;
	toplam = 0;
	va_start(ap, n);
	while (i < n)
	{
		printf("%d", va_arg(ap, int));
		i++;
	}
	va_end(ap);
	i = 0;
	va_start(ap, n);
	while (i < n)
	{
		printf("%d", va_arg(ap, int));
		i++;
	}
}
int	main()
{
	topla(5, 1,2,3,4,5);
}
