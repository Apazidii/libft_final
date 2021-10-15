#include "libft.h"

void	*ft_bzero(void *destination, unsigned int n)
{
	unsigned int	i;
	unsigned char	*p;

	i = 0;
	p = destination;
	while (i < n)
	{
		*p = '\0';
		p++;
		i++;
	}
	return (destination);
}
