#include "libft.h"

unsigned int	ft_strlcat(char *dst, const char *src, unsigned int size)
{
	unsigned int	i;
	int				k;

	i = 0;
	while (dst[i] != '\0' && i < size)
		i++;
	k = i;
	if (size - k == 0)
		return (k + ft_strlen(src));
	while (i + 1 < size && src[i - k] != '\0')
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i - k];
		i++;
	}
	if (size != 0)
		dst[i] = '\0';
	return (k + ft_strlen(src));
}
