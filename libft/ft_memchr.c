#include "libft.h"
#include <stdio.h>

void	*ft_memchr(void *str, int c, unsigned int n)
{
	unsigned int	i;
	unsigned char	*src;

	src = (unsigned char *)str;
	i = 0;
	while (i < n)
	{
		if (*src == (unsigned char)c)
			return ((void *) src);
		src++;
		i++;
	}
	return (0);
}
