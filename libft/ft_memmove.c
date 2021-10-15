#include "libft.h"

void	*ft_memmove(void *destination, void *source, unsigned int n)
{
	unsigned int	i;

	if (source >= destination)
	{
		i = 0;
		while (i < n)
		{
			((char *)destination)[i] = ((char *)source)[i];
			i++;
		}
	}
	else
	{
		i = n;
		while (i > 0)
		{
			i--;
			((char *)destination)[i] = ((char *)source)[i];
		}
	}
	return (destination);
}
