#include "libft.h"

char	*nospace(char *c)
{
	int	i;

	i = 0;
	while (c[i] == ' ' || c[i] == '\f' || c[i] == '\n' || \
			c[i] == '\r' || c[i] == '\t' || c[i] == '\v')
	{
		i++;
	}
	return (&c[i]);
}

int	ft_atoi(const char *s)
{
	char		*ss;
	int			b;
	char		*str;
	long int	n;

	ss = (char *)s;
	b = 0;
	n = 0;
	str = nospace(ss);
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			b++;
		str++;
	}
	while (*str != '\0' && *str >= '0' && *str <= '9')
	{
		n = n * 10 + (*str - '0');
		str++;
	}
	if (b)
		n = n * -1;
	return (n);
}
