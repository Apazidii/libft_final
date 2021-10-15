#include "libft.h"

char	*ft_strchr(char *str, int c)
{
	int		i;
	char	*s;

	s = (char *)str;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (unsigned char)c)
			return (&s[i]);
		i++;
	}
	if (c == '\0')
		return (&s[i]);
	else
		return (0);
}
