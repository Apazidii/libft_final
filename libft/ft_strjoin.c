#include "libft.h"
#include <stdlib.h>

char	*cpys(char const *s, char *p)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		*p = s[i];
		p++;
		i++;
	}
	return (p);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		k;
	char	*p;
	char	*res;

	k = ft_strlen(s1) + ft_strlen(s2);
	res = (char *)malloc(sizeof(char) * k + 1);
	p = res;
	p = cpys(s1, p);
	p = cpys(s2, p);
	res[k] = '\0';
	return (res);
}
