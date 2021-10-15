#include "libft.h"

char	*ft_strrchr(char *str, int c)
{
	int		i;
	char	*k;
	char	*s;

	s = (char *)str;
	i = 0;
	k = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (unsigned char)c)
			k = &s[i];
		i++;
	}
	if (c == '\0')
		return (&s[i]);
	else
		return (k);
}
