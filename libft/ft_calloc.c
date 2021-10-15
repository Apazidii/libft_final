#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(unsigned int n, unsigned int m)
{
	void	*p;

	p = malloc(n * m);
	p = ft_bzero(p, n * m);
	return (p);
}
