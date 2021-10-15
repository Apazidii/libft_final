#include "libft.h"

int	ft_strncmp(const char *ss1, const char *ss2, unsigned int n)
{
	unsigned int	i;
	char			*s1;
	char			*s2;

	s1 = (char *)ss1;
	s2 = (char *)ss2;
	i = 0;
	while (i < n)
	{
		if ((unsigned char)s1[i] != (unsigned char)s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}
