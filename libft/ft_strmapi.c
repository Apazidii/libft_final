#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	unsigned int	l;
	char			*res;

	i = 0;
	l = ft_strlen(s);
	res = (char *)malloc(sizeof(char) * l + 1);
	res[l] = '\0';
	while (i < l)
	{
		res[i] = f(i, s[i]);
		i++;
	}
	return (res);
}
