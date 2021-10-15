#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(char *str)
{
	int		l;
	char	*res;
	int		i;

	l = ft_strlen(str);
	res = (char *)malloc(sizeof(char) * l + 1);
	i = 0;
	while (str[i] != '\0')
	{
		res[i] = str[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}
