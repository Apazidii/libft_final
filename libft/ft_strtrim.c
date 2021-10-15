#include "libft.h"
#include <stdlib.h>

int	my_find(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (c == s[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int	i;
	int	start;
	int	l;

	i = 0;
	while (my_find(set, s1[i]))
		i++;
	start = i;
	l = ft_strlen(s1) - 1;
	i = l;
	while (my_find(set, s1[i]))
		i--;
	return (ft_substr(s1, start, l - (start + (l - i) - 1)));
}
