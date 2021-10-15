#include "libft.h"
#include <stdlib.h>

int	count_word(char const *s, char c, int f)
{
	unsigned int	a;
	unsigned int	i;

	i = 0;
	if (f)
	{
		a = 0;
		if (s[0] == '\0')
			return (0);
		while (s[i + 1] != '\0' && s[i] != 0)
		{
			if ((s[i] == c) && (s[i + 1] != c))
				a = a + 1;
			i++;
		}
		if (s[0] != c)
			a = a + 1;
		return (a);
	}
	else
	{
		while (s[i] != c && s[i] != '\0')
			i++;
		return (i);
	}
}

char	*next_word(char *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != c && s[i] != '\0')
		i++;
	while (s[i] == c && s[i] != '\0')
		i++;
	return (&s[i]);
}

char	*copy_word(char *s, char c)
{
	int		i;
	int		l;
	char	*res;

	l = count_word(s, c, 0);
	res = (char *)malloc(sizeof(char) *(l + 1));
	if (res == NULL)
		return (NULL);
	i = 0;
	while (s[i] != c && s[i] != '\0')
	{
		res[i] = s[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}

char	**freearr(char **res, int l)
{
	int	i;

	i = 0;
	while (i < l)
	{
		free(res[i]);
		i++;
	}
	free(res);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	int		k;
	int		i;
	char	**res;
	char	*str;

	i = 0;
	str = (char *) s;
	k = count_word(str, c, 1);
	res = (char **)malloc(sizeof(char *) * (k + 1));
	if (res == NULL)
		return (NULL);
	while (*str == c)
		str++;
	while (i < k)
	{
		res[i] = copy_word(str, c);
		if (res[i] == NULL)
			return (freearr(res, i + 1));
		str = next_word(str, c);
		i++;
	}
	res[i] = NULL;
	return (res);
}
