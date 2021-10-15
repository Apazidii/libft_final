#include "libft.h"
#include <stdlib.h>

int	len_num(long int n)
{
	int	i;

	if (n == 0)
		return (1);
	i = 0;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*cpy_num(long int n, char *s, int l)
{
	int	i;

	i = 0;
	while (i < l)
	{
		s[l - i - 1] = '0' + n % 10;
		n = n / 10;
		i++;
	}
	return (s);
}

char	*ft_itoa(int num)
{
	int			l;
	long int	n;
	char		*s;

	n = num;
	if (n < 0)
	{
		n = n *-1;
		l = len_num(n);
		s = (char *)malloc(sizeof(char) * l + 2);
		s[0] = '-';
		cpy_num(n, &s[1], l);
		l++;
	}
	else
	{
		l = len_num(n);
		s = (char *)malloc(sizeof(char) * l + 1);
		cpy_num(n, s, l);
	}
	s[l] = '\0';
	return (s);
}
