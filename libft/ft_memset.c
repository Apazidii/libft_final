#include "libft.h"

void	*ft_memset(void *destination, int c, unsigned int n)
{
	unsigned int	i;
	unsigned char	*p;

	i = 0;
	p = destination;
	while (i < n)
	{
		*p = c;
		p++;
		i++;
	}
	return (destination);
}
